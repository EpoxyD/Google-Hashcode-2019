package.path = package.path .. ';./solution/?.lua'

local core = require('core')
local pars = require('parser')

local function validityCheck(slides, photos)
    for _,slide in ipairs(slides) do
        for _,id in ipairs(slide) do
            local orientation = photos[id+1].orientation
            if orientation == "H" and #slide ~= 1 then
                error("Can only allow one horizontal picture per slide")
            elseif orientation == "V" and #slide > 2 then
                error("Can only allow two vertical pictures per slide")
            end
        end
    end
    print("Seems all good to me")
end

local function calculateTags(slide, photos)
    local result = {}
    for _,id in ipairs(slide) do
        for tag in pairs(photos[id+1].tags) do
            result[tag] = true
        end
    end
    return result
end

local function calculateInterest(slide_1, slide_2, photos)
    local tags_1 = calculateTags(slide_1, photos)
    local tags_2 = calculateTags(slide_2, photos)

    local common = 0
    for tag in pairs(tags_1) do
        if tags_2[tag] then
            common = common +1
        end
    end

    local one_not_two = 0
    for tag in pairs(tags_1) do
        if not tags_2[tag] then
            one_not_two = one_not_two +1
        end
    end

    local two_not_one = 0
    for tag in pairs(tags_2) do
        if not tags_1[tag] then
            two_not_one = two_not_one +1
        end
    end

    return math.min(common, one_not_two, two_not_one)
end

local function main(inputfile, outputfile)
    assert(type(inputfile) == "string")
    assert(type(outputfile) == "string")

    local photos = pars.parseInput(inputfile)
    local slides = pars.parseResult(outputfile)

    validityCheck(slides, photos)

    local total = 0
    local slide_1 = slides[1]
    for id = 2,#slides do
        local slide_2 = slides[id]
        local value = calculateInterest(slide_1, slide_2, photos)
        total = total + value
        slide_1 = slide_2
    end
    print("[YOUR SCORE] = " .. total)
end

if #arg == 2 then
    main(arg[1], arg[2])
else
    print("[FORMAT] = lua solution.lua <inputfile> <resultfile>")
end
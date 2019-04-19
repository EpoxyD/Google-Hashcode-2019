package.path = package.path .. ";./src/?.lua"

require("printer")
require("parser")

local verticals = {}
local horizontals = {}

local function order_pictures_to_orientation(photos)
    for _, photo in ipairs(photos) do
        if photo.orientation == "V" then
            table.insert(verticals, photo)
        elseif photo.orientation == "H" then
            table.insert(horizontals, photo)
        else
            printer("Something went wrong")
        end
    end
end

local function start(inputfile)
    local photos = parse(inputfile)
    printer("# Photos = " .. #photos)
    order_pictures_to_orientation(photos)
end

if #arg == 1 then
    start(arg[1])
else
    printer("Please insert one single input file")
end

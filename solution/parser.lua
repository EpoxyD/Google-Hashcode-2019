local core = require('core')

local function stringToTable(str)
    assert(type(str) == "string")
    local result = {}
    for value in str:gmatch("[^ ]+") do
        table.insert(result, value)
    end
    return result
end

local function parseInput(filename)
    local file = assert(io.open(filename,"r"))
    io.input(file)
    local nr_photos = io.read()
    local photos = {}
    for id = 1,nr_photos do
        local data = stringToTable(io.read())
        local orientation = data[1]
        local nr_tags = data[2]
        local tags = {}
        for i = 1,nr_tags do
            tags[data[i+2]] = true
        end
        photos[id] = {
            orientation = orientation,
            tags = tags
        }
    end
    return photos
end

local function parseResult(filename)
    local file = assert(io.open(filename, "r"))
    io.input(file)
    local nr_slides = io.read()
    local slides = { }
    for i = 1,nr_slides do
        local data = stringToTable(io.read())
        table.insert(slides, data)
    end
    return slides
end

local parser = {
    parseInput = parseInput,
    parseResult = parseResult
}

return parser
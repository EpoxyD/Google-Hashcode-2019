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
    assert(type(filename) == "string")
    local file = io.open(filename,"r")
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
    return nr_photos, photos
end

local parser = {
    parseInput = parseInput
}

return parser
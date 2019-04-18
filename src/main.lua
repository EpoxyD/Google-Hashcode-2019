package.path = package.path .. ';./src/?.lua'

require('printer')
require('parser')

local function start (inputfile)
    local photos = parse(inputfile)
end

if #arg == 1 then
    start(arg[1])
else
    printer("Please insert one single input file")
end
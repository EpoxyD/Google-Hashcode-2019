package.path = package.path .. ';./src/?.lua'

local parser = require('parser')
local core = require('core')

local nr_photos, photos = parser.parseInput("data/e_shiny_selfies.txt")
local function printer_generic (value)
    print(tostring(value))
end

local function printer_table (value, rec_indent)
    local i = rec_indent or ''
    for k,v in pairs(value) do
        local type = type(v)
        if type == "table" then
            print(table.concat({i,k,' = {'}))
            printer_table(v, i..'    ')
            print(table.concat({i,'}'}))
        else
            print(table.concat({i,k,' = ',tostring(v),','}))
        end
    end
end

local function printer_delegate(value)
    local type = type(value)
    if type == "table" then
        printer_table(value)
    else
        printer_generic(value)
    end
end

_G.printer = printer_delegate
function printTable (t,i)
    if not i then print('{') end
    local indent = i or "\t"
    for k,v in pairs(t) do
        if type(v) == "table" then
            print(indent..k.." = {")
            printTable(v,indent.."\t")
            print(indent.."},")
        else
            print(indent..k.." = "..tostring(v))
        end
    end
    if not i then print('},') end
end

local core = {
    printTable = printTable
}

return core
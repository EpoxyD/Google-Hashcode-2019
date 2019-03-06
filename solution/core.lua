function dump (t,i)
    if type(t) ~= "table" then
        print(tostring(t))
    else
        if not i then print('{') end
        local indent = i or "\t"
        for k,v in pairs(t) do
            if type(v) == "table" then
                print(indent..k.." = {")
                dump(v,indent.."\t")
                print(indent.."},")
            else
                print(indent..k.." = "..tostring(v))
            end
        end
        if not i then print('},') end
    end
end

local core = {
    dump = dump
}

return core
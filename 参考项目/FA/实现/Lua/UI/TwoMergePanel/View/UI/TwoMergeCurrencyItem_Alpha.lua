---@class TwoMergeCurrencyItem_Alpha
local TwoMergeCurrencyItem = require "UI.TwoMergePanel.View.UI.TwoMergeCurrencyItem"
local TwoMergeCurrencyItem_Alpha = class(TwoMergeCurrencyItem, "TwoMergeCurrencyItem_Alpha")

function TwoMergeCurrencyItem_Alpha:ctor(gameObject, currencyId) end
function TwoMergeCurrencyItem_Alpha:destroy() TwoMergeCurrencyItem.destroy(self); self = nil end

function TwoMergeCurrencyItem_Alpha:Bind(gameObject)
    TwoMergeCurrencyItem.Bind(self, gameObject)
    self.canvasgroup.alpha = 0
end

function TwoMergeCurrencyItem_Alpha:TriggerFly(id, count, startPosition)
    TwoMergeCurrencyItem.TriggerFly(self, id, count, startPosition)
    if self.alphaTweener ~= nil then
        self.alphaTweener:Kill()
        self.alphaTweener = nil
    end
    if self.currencyId == id then
        self.canvasgroup.alpha = 1
        self.alphaTweener = self.canvasgroup:DOFade(0, 0.5):SetDelay(4)
    end
end

return TwoMergeCurrencyItem_Alpha
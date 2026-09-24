namespace GameLogic.Player.Items.Order;

[MetaSerializableDerived(21)]
public class MultiTargetOrderState : OrderState
{

	public MultiTargetOrderState() { }

	public MultiTargetOrderState(MetaDictionary<Int32, Int32> takeIn, List<Int32> rewardItems, List<Int32> rewardAmounts, string activationType, IGenerationContext context) { }

	public virtual ValueTuple<Int32, Int32> GetProgress() { }

	public virtual SinkType GetSinkType() { }

	public virtual bool IsCompleted() { }

	public static IOrderState NewState(MetaDictionary<Int32, Int32> scores, List<Int32> rewardItems, List<Int32> rewardAmounts, string activationType, IGenerationContext context) { }

}


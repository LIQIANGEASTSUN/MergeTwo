namespace GameLogic.Player.Items.Order;

[MetaSerializableDerived(20)]
public class SingleTargetOrderState : OrderState
{

	public SingleTargetOrderState() { }

	public SingleTargetOrderState(MetaDictionary<Int32, Int32> takeIn, List<Int32> rewardItems, List<Int32> rewardAmounts, string activationType, IGenerationContext context) { }

	public virtual ValueTuple<Int32, Int32> GetProgress() { }

	public virtual SinkType GetSinkType() { }

	public virtual bool IsCompleted() { }

	public static IOrderState NewState(MetaDictionary<Int32, Int32> scores, List<Int32> rewardItems, List<Int32> rewardAmounts, string activationType, IGenerationContext context) { }

}


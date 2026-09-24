//Type is in global namespace

public class Booster : BaseItem
{
	private bool _isAnimating; //Field offset: 0xD8

	public Booster() { }

	public virtual void OnItemPlacedToBoard(bool willPlayParticle = false) { }

	public virtual UniTask<BaseItem> OnMerged(BaseItem otherItem = null) { }

	protected void ResetProduceHint() { }

}


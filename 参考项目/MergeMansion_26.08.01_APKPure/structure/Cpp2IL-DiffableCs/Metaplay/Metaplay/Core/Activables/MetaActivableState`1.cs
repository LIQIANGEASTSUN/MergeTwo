namespace Metaplay.Core.Activables;

public abstract class MetaActivableState : MetaActivableState
{

	[IgnoreDataMember]
	public abstract TId ActivableId
	{
		 get { } //Length: 0
	}

	protected MetaActivableState`1() { }

	public abstract TId get_ActivableId() { }

	protected virtual object TryGetActivableId() { }

}


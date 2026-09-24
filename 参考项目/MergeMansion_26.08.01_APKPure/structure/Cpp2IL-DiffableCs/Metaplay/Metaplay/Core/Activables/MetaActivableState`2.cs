namespace Metaplay.Core.Activables;

public abstract class MetaActivableState : MetaActivableState
{
	[CompilerGenerated]
	private TInfo <ActivableInfo>k__BackingField; //Field offset: 0x0

	[IgnoreDataMember]
	public abstract TId ActivableId
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	[IgnoreDataMember]
	public TInfo ActivableInfo
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[IgnoreDataMember]
	public virtual MetaActivableParams ActivableParams
	{
		 get { } //Length: 160
	}

	public virtual bool IsValidState
	{
		 get { } //Length: 24
	}

	protected MetaActivableState`2() { }

	protected MetaActivableState`2(TInfo activableInfo) { }

	public abstract TId get_ActivableId() { }

	[CompilerGenerated]
	public TInfo get_ActivableInfo() { }

	public virtual MetaActivableParams get_ActivableParams() { }

	public virtual bool get_IsValidState() { }

	protected abstract void set_ActivableId(TId value) { }

	[CompilerGenerated]
	protected void set_ActivableInfo(TInfo value) { }

	protected virtual object TryGetActivableId() { }

	[MetaOnDeserialized]
	private void TryResolveInfo(MetaOnDeserializedParams par) { }

}


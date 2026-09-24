// Dll : Assembly-CSharp.dll
// Namespace: 
public interface ISerializableToJson // TypeDefIndex: 185
{

	// Properties
	[JsonIgnore]
	public abstract JsonUtil.SerializerMode mode { get; }

	// Methods

	//  Slot: 0
	public abstract JsonUtil.SerializerMode get_mode();

	//  Slot: 1
	public abstract void PreSerialize();

	//  Slot: 2
	public abstract void PostDeserialize();
}

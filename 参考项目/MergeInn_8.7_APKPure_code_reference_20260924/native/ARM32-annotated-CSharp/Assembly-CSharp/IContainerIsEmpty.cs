// Dll : Assembly-CSharp.dll
// Namespace: 
public interface IContainerIsEmpty // TypeDefIndex: 1289
{

	// Properties
	public abstract Action containerIsEmpty { get; set; }
	public abstract bool hasCapacity { get; }
	public abstract int itemsReadyToSpawn { get; }
	public abstract string chainName { get; }

	// Methods

	//  Slot: 0
	public abstract Action get_containerIsEmpty();

	//  Slot: 1
	public abstract void set_containerIsEmpty(Action value);

	//  Slot: 2
	public abstract bool get_hasCapacity();

	//  Slot: 3
	public abstract int get_itemsReadyToSpawn();

	//  Slot: 4
	public abstract string get_chainName();
}

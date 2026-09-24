// Dll : Assembly-CSharp.dll
// Namespace: 
public interface IOutOfEnergyTrigger // TypeDefIndex: 1291
{

	// Properties
	public abstract Action<Action> useContainerWithoutEnergy { get; set; }
	public abstract Action selectEmptyContainerWithoutEnergy { get; set; }
	public abstract Action buttonSpeedUpEnergyTrigger { get; set; }

	// Methods

	//  Slot: 0
	public abstract Action<Action> get_useContainerWithoutEnergy();

	//  Slot: 1
	public abstract void set_useContainerWithoutEnergy(Action<Action> value);

	//  Slot: 2
	public abstract Action get_selectEmptyContainerWithoutEnergy();

	//  Slot: 3
	public abstract void set_selectEmptyContainerWithoutEnergy(Action value);

	//  Slot: 4
	public abstract Action get_buttonSpeedUpEnergyTrigger();

	//  Slot: 5
	public abstract void set_buttonSpeedUpEnergyTrigger(Action value);
}

// Dll : Assembly-CSharp.dll
// Namespace: 
public interface IBoosterSpeedup // TypeDefIndex: 1288
{

	// Methods

	//  Slot: 0
	public abstract void UpdateAndPauseChargesTimers(float boostSeconds);

	//  Slot: 1
	public abstract void UnpauseChargeTimers(bool silent = false);

	//  Slot: 2
	public abstract bool CanBoost();
}

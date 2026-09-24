namespace FAT.Merge
{
	public interface IExternalOutput : MergeWorld.IActivityHandler
	{
		bool CanUseItem(Item source);

		bool TrySpawnItem(Item source, out int outputId, out ItemSpawnContext context);
	}
}

namespace Merger.ProducerExcitement.Compatibility
{
	public class ProducerExcitementSpawnData
	{
		public string UniqueId { get; set; }

		public int ClaimId { get; set; }

		public bool NoAnimation { get; }

		public ProducerExcitementSpawnData(string uniqueId, int claimId, bool noAnimation)
		{
		}
	}
}

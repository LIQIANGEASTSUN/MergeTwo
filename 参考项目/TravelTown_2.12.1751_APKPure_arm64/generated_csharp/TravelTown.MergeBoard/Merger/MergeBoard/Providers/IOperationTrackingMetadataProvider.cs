namespace Merger.MergeBoard.Providers
{
	public interface IOperationTrackingMetadataProvider
	{
		string Topic { get; }

		string Action { get; }
	}
}

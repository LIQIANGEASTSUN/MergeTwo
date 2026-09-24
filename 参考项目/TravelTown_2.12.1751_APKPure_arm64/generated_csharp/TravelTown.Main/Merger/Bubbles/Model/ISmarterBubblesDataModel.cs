using Merger.Bubbles.Model.Data;

namespace Merger.Bubbles.Model
{
	public interface ISmarterBubblesDataModel
	{
		SmarterBubblesData SmarterBubblesData { get; }

		void Save();
	}
}

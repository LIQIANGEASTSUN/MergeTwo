using Framework.Core.Services.Backend.Http.Interfaces.Validations;

namespace MergeEngine.Configuration.Definitions.Validators
{
	public class ItemMultipleValidator : IResponseValidator<ItemMultiple>
	{
		public bool Validate(ItemMultiple item, string source, out string failReason)
		{
			failReason = null;
			return false;
		}
	}
}

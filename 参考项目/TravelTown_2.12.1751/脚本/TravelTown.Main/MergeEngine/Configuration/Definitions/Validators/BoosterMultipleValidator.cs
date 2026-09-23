using Framework.Core.Services.Backend.Http.Interfaces.Validations;

namespace MergeEngine.Configuration.Definitions.Validators
{
	public class BoosterMultipleValidator : IResponseValidator<BoosterMultiple>
	{
		public bool Validate(BoosterMultiple booster, string source, out string failReason)
		{
			failReason = null;
			return false;
		}
	}
}

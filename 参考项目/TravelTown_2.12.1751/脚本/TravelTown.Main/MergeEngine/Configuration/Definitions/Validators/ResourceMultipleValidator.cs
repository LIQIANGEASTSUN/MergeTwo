using Framework.Core.Services.Backend.Http.Interfaces.Validations;

namespace MergeEngine.Configuration.Definitions.Validators
{
	public class ResourceMultipleValidator : IResponseValidator<ResourceMultiple>
	{
		public bool Validate(ResourceMultiple resource, string source, out string failReason)
		{
			failReason = null;
			return false;
		}
	}
}

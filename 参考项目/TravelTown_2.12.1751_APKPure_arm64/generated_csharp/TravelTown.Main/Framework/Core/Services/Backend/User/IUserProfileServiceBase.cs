using Framework.Core.Services.Backend.User.Data;
using strange.extensions.promise.api;

namespace Framework.Core.Services.Backend.User
{
	public interface IUserProfileServiceBase
	{
		UserProfileInfo UserProfileInfo { get; }

		IPromise CreateAndStoreUserProfile();
	}
}

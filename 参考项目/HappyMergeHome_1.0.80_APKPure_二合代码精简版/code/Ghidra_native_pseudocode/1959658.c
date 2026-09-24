
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01969658(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_0196996c + 0x1969678);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01969970 + 0x196968c));
    func_0x01438628(*(undefined4 *)(_UNK_01969974 + 0x1969698));
    func_0x01438628(*(undefined4 *)(_UNK_01969978 + 0x19696a4));
    func_0x01438628(*(undefined4 *)(_UNK_0196997c + 0x19696b0));
    func_0x01438628(*(undefined4 *)(_UNK_01969980 + 0x19696bc));
    func_0x01438628(*(undefined4 *)(_UNK_01969984 + 0x19696c8));
    func_0x01438628(*(undefined4 *)(_UNK_01969988 + 0x19696d4));
    func_0x01438628(*(undefined4 *)(_UNK_0196998c + 0x19696e0));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x992f,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01969990 + 0x1969750) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_01959198();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_019694a0(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_01969994 + 0x1969794) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01969998 + 0x19697b4));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_0196999c + 0x1969810);
        puVar9 = *(undefined4 **)(_UNK_019699a0 + 0x1969818);
        do {
          if (*(int *)(**(int **)(_UNK_019699a4 + 0x1969820) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar3 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_019699a8 + 0x196988c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x014e9518(*puVar10);
          iVar4 = func_0x0152983c(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            uVar2 = *puVar9;
            *(undefined1 *)(param_2 + 0x52) = 1;
            iVar5 = func_0x0152983c(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x019699b0(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_019699ac + 0x1969950);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x992f,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}


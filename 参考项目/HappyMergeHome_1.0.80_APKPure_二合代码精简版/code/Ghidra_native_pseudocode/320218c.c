
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0321218c(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_0321249c + 0x32121ac);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032124a0 + 0x32121c0));
    func_0x01438628(*(undefined4 *)(_UNK_032124a4 + 0x32121cc));
    func_0x01438628(*(undefined4 *)(_UNK_032124a8 + 0x32121d8));
    func_0x01438628(*(undefined4 *)(_UNK_032124ac + 0x32121e4));
    func_0x01438628(*(undefined4 *)(_UNK_032124b0 + 0x32121f0));
    func_0x01438628(*(undefined4 *)(_UNK_032124b4 + 0x32121fc));
    func_0x01438628(*(undefined4 *)(_UNK_032124b8 + 0x3212208));
    func_0x01438628(*(undefined4 *)(_UNK_032124bc + 0x3212214));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x7e94,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032124c0 + 0x3212284) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03204330();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_03211fd4(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_032124c4 + 0x32122c8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032124c8 + 0x32122e4));
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
        puVar10 = *(undefined4 **)(_UNK_032124cc + 0x3212340);
        puVar9 = *(undefined4 **)(_UNK_032124d0 + 0x3212348);
        do {
          if (*(int *)(**(int **)(_UNK_032124d4 + 0x3212350) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar3 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar3 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x02be153c(iVar5,uVar2,0);
          if (*(int *)(**(int **)(_UNK_032124d8 + 0x32123bc) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x04e4a028(*puVar10);
          iVar4 = func_0x04cfd760(iVar1,iVar6,*puVar9);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x02be1348(iVar5,uVar2,0);
          if (iVar5 == 0 && iVar3 == 1) {
            iVar5 = func_0x04cfd760(iVar1,iVar6,*puVar9);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x032124e0(param_2,*(undefined4 *)(iVar5 + 8));
            *(undefined1 *)(param_2 + 0x52) = 1;
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_032124dc + 0x3212480);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x7e94,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}


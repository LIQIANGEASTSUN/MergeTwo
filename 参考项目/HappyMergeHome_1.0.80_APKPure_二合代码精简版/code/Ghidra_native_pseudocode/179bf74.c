
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017abf74(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_017ac288 + 0x17abf94);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017ac28c + 0x17abfa8));
    func_0x01438628(*(undefined4 *)(_UNK_017ac290 + 0x17abfb4));
    func_0x01438628(*(undefined4 *)(_UNK_017ac294 + 0x17abfc0));
    func_0x01438628(*(undefined4 *)(_UNK_017ac298 + 0x17abfcc));
    func_0x01438628(*(undefined4 *)(_UNK_017ac29c + 0x17abfd8));
    func_0x01438628(*(undefined4 *)(_UNK_017ac2a0 + 0x17abfe4));
    func_0x01438628(*(undefined4 *)(_UNK_017ac2a4 + 0x17abff0));
    func_0x01438628(*(undefined4 *)(_UNK_017ac2a8 + 0x17abffc));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8e8c,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_017ac2ac + 0x17ac06c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0179d7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_017abdbc(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_017ac2b0 + 0x17ac0b0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017ac2b4 + 0x17ac0d0));
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
        puVar10 = *(undefined4 **)(_UNK_017ac2b8 + 0x17ac12c);
        puVar9 = *(undefined4 **)(_UNK_017ac2bc + 0x17ac134);
        do {
          if (*(int *)(**(int **)(_UNK_017ac2c0 + 0x17ac13c) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_017ac2c4 + 0x17ac1a8) + 0x74) == 0) {
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
            *(undefined1 *)(param_2 + 0x53) = 1;
            iVar5 = func_0x0152983c(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x017ac2cc(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_017ac2c8 + 0x17ac26c);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x8e8c,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}


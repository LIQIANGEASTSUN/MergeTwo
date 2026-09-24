
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0187c7c4(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_0187cad8 + 0x187c7e4);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0187cadc + 0x187c7f8));
    func_0x01438628(*(undefined4 *)(_UNK_0187cae0 + 0x187c804));
    func_0x01438628(*(undefined4 *)(_UNK_0187cae4 + 0x187c810));
    func_0x01438628(*(undefined4 *)(_UNK_0187cae8 + 0x187c81c));
    func_0x01438628(*(undefined4 *)(_UNK_0187caec + 0x187c828));
    func_0x01438628(*(undefined4 *)(_UNK_0187caf0 + 0x187c834));
    func_0x01438628(*(undefined4 *)(_UNK_0187caf4 + 0x187c840));
    func_0x01438628(*(undefined4 *)(_UNK_0187caf8 + 0x187c84c));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x93cd,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0187cafc + 0x187c8bc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0186d4b8();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0187c60c(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_0187cb00 + 0x187c900) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0187cb04 + 0x187c920));
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
        puVar10 = *(undefined4 **)(_UNK_0187cb08 + 0x187c97c);
        puVar9 = *(undefined4 **)(_UNK_0187cb0c + 0x187c984);
        do {
          if (*(int *)(**(int **)(_UNK_0187cb10 + 0x187c98c) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_0187cb14 + 0x187c9f8) + 0x74) == 0) {
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
            func_0x0187cb1c(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_0187cb18 + 0x187cabc);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x93cd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}


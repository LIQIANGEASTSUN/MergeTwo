
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032de0d8(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_032de3ec + 0x32de0f8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032de3f0 + 0x32de10c));
    func_0x01438628(*(undefined4 *)(_UNK_032de3f4 + 0x32de118));
    func_0x01438628(*(undefined4 *)(_UNK_032de3f8 + 0x32de124));
    func_0x01438628(*(undefined4 *)(_UNK_032de3fc + 0x32de130));
    func_0x01438628(*(undefined4 *)(_UNK_032de400 + 0x32de13c));
    func_0x01438628(*(undefined4 *)(_UNK_032de404 + 0x32de148));
    func_0x01438628(*(undefined4 *)(_UNK_032de408 + 0x32de154));
    func_0x01438628(*(undefined4 *)(_UNK_032de40c + 0x32de160));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x83c6,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_032de410 + 0x32de1d0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_032d2dac();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_032ddf20(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_032de414 + 0x32de214) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_032de418 + 0x32de234));
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
        puVar10 = *(undefined4 **)(_UNK_032de41c + 0x32de290);
        puVar9 = *(undefined4 **)(_UNK_032de420 + 0x32de298);
        do {
          if (*(int *)(**(int **)(_UNK_032de424 + 0x32de2a0) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_032de428 + 0x32de30c) + 0x74) == 0) {
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
            uVar2 = *puVar9;
            *(undefined1 *)(param_2 + 0x52) = 1;
            iVar5 = func_0x04cfd760(iVar1,iVar6,uVar2);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            func_0x032de430(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_032de42c + 0x32de3d0);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x83c6,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}


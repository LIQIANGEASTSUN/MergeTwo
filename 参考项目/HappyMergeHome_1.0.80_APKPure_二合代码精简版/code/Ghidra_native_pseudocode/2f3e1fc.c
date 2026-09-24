
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02f4e1fc(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_02f4e510 + 0x2f4e21c);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f4e514 + 0x2f4e230));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e518 + 0x2f4e23c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e51c + 0x2f4e248));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e520 + 0x2f4e254));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e524 + 0x2f4e260));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e528 + 0x2f4e26c));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e52c + 0x2f4e278));
    func_0x01438628(*(undefined4 *)(_UNK_02f4e530 + 0x2f4e284));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6e12,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_02f4e534 + 0x2f4e2f4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_02f3dd38();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_02f4e044(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_02f4e538 + 0x2f4e338) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_02f4e53c + 0x2f4e358));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_029b1058(iVar1,uVar2,0);
    iVar8 = 0;
    iVar5 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
      iVar8 = 0;
      if (0 < iVar5) {
        iVar8 = 0;
        iVar6 = 0;
        puVar10 = *(undefined4 **)(_UNK_02f4e540 + 0x2f4e3b4);
        puVar9 = *(undefined4 **)(_UNK_02f4e544 + 0x2f4e3bc);
        do {
          if (*(int *)(**(int **)(_UNK_02f4e548 + 0x2f4e3c4) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_02f4e54c + 0x2f4e430) + 0x74) == 0) {
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
            func_0x02f4e554(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_02f4e550 + 0x2f4e4f4);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x03fc9b24(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x6e12,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0164bcac(undefined4 *param_1,int param_2,undefined4 param_3)

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
  
  pcVar7 = (char *)(_UNK_0164bfc0 + 0x164bccc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0164bfc4 + 0x164bce0));
    func_0x01438628(*(undefined4 *)(_UNK_0164bfc8 + 0x164bcec));
    func_0x01438628(*(undefined4 *)(_UNK_0164bfcc + 0x164bcf8));
    func_0x01438628(*(undefined4 *)(_UNK_0164bfd0 + 0x164bd04));
    func_0x01438628(*(undefined4 *)(_UNK_0164bfd4 + 0x164bd10));
    func_0x01438628(*(undefined4 *)(_UNK_0164bfd8 + 0x164bd1c));
    func_0x01438628(*(undefined4 *)(_UNK_0164bfdc + 0x164bd28));
    func_0x01438628(*(undefined4 *)(_UNK_0164bfe0 + 0x164bd34));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x862a,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0164bfe4 + 0x164bda4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_0163b7ec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = FUN_0164baf4(iVar1,param_3);
    if (*(int *)(**(int **)(_UNK_0164bfe8 + 0x164bde8) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_0164bfec + 0x164be08));
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
        puVar10 = *(undefined4 **)(_UNK_0164bff0 + 0x164be64);
        puVar9 = *(undefined4 **)(_UNK_0164bff4 + 0x164be6c);
        do {
          if (*(int *)(**(int **)(_UNK_0164bff8 + 0x164be74) + 0x74) == 0) {
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
          if (*(int *)(**(int **)(_UNK_0164bffc + 0x164bee0) + 0x74) == 0) {
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
            func_0x0164c004(param_2,*(undefined4 *)(iVar5 + 8));
          }
          iVar5 = *(int *)(iVar1 + 0xc);
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + iVar3;
        } while (iVar6 < iVar5);
      }
    }
    uVar2 = **(undefined4 **)(_UNK_0164c000 + 0x164bfa4);
    *param_1 = 0;
    param_1[1] = 0;
    func_0x024f1088(param_1,iVar8,iVar5,uVar2);
  }
  else {
    iVar1 = func_0x029540a4(0x862a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02913cb8(&uStack_30,iVar1,param_2,param_3,0);
    *param_1 = uStack_30;
    param_1[1] = uStack_2c;
  }
  return;
}


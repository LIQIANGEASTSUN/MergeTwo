
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_02be6438(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar6 = (char *)(_UNK_02be6c88 + 0x2be6454);
  if (*pcVar6 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be6c8c + 0x2be6468));
    func_0x01438628(*(undefined4 *)(_UNK_02be6c90 + 0x2be6474));
    func_0x01438628(*(undefined4 *)(_UNK_02be6c94 + 0x2be6480));
    func_0x01438628(*(undefined4 *)(_UNK_02be6c98 + 0x2be648c));
    func_0x01438628(*(undefined4 *)(_UNK_02be6c9c + 0x2be6498));
    func_0x01438628(*(undefined4 *)(_UNK_02be6ca0 + 0x2be64a4));
    func_0x01438628(*(undefined4 *)(_UNK_02be6ca4 + 0x2be64b0));
    func_0x01438628(*(undefined4 *)(_UNK_02be6ca8 + 0x2be64bc));
    func_0x01438628(*(undefined4 *)(_UNK_02be6cac + 0x2be64c8));
    func_0x01438628(*(undefined4 *)(_UNK_02be6cb0 + 0x2be64d4));
    func_0x01438628(*(undefined4 *)(_UNK_02be6cb4 + 0x2be64e0));
    func_0x01438628(*(undefined4 *)(_UNK_02be6cb8 + 0x2be64ec));
    func_0x01438628(*(undefined4 *)(_UNK_02be6cbc + 0x2be64f8));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x500a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02be6cc0 + 0x2be6564));
    func_0x02c38570(iVar1,0);
    if (*(int *)(**(int **)(_UNK_02be6cc4 + 0x2be6580) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar2 = FUN_02be3c9c(param_2);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    uVar2 = FUN_02be3e3c(param_2);
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    uVar2 = FUN_02be40bc(param_2);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    uVar2 = FUN_02be3fdc(param_2);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    uVar2 = FUN_02be425c(param_2);
    puVar11 = *(undefined4 **)(_UNK_02be6cc8 + 0x2be65e8);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    iVar3 = func_0x014388d4(*puVar11);
    puVar13 = *(undefined4 **)(_UNK_02be6ccc + 0x2be6604);
    func_0x046c19b0(iVar3,*puVar13);
    piVar8 = (int *)(iVar1 + 0x1c);
    *piVar8 = iVar3;
    func_0x014385cc(piVar8,iVar3);
    iVar3 = func_0x014388d4(*puVar11);
    func_0x046c19b0(iVar3,*puVar13);
    piVar12 = (int *)(iVar1 + 0x20);
    *piVar12 = iVar3;
    func_0x014385cc(piVar12,iVar3);
    iVar3 = func_0x014388d4(*puVar11);
    func_0x046c19b0(iVar3,*puVar13);
    piVar9 = (int *)(iVar1 + 0x24);
    *piVar9 = iVar3;
    func_0x014385cc(piVar9,iVar3);
    iVar3 = func_0x03600048(*(undefined4 *)(param_1 + 0x14),param_2,
                            **(undefined4 **)(_UNK_02be6cd0 + 0x2be6680));
    if (iVar3 != 0) {
      iVar7 = *(int *)(iVar3 + 0x10);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar7,**(undefined4 **)(_UNK_02be6cd4 + 0x2be66bc));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      puVar11 = *(undefined4 **)(_UNK_02be6cd8 + 0x2be66dc);
      piVar10 = piVar9;
      while (iVar4 = func_0x04878f14(&uStack_38,*puVar11), iVar7 = iStack_2c, iVar4 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        piVar5 = *(int **)(iVar7 + 0xc);
        if (0 < (int)piVar5) {
          piVar5 = *(int **)(iVar7 + 8);
          piVar10 = piVar5;
        }
        if (0 < (int)piVar5) {
          if (iVar1 == 0) {
            func_0x014388e4();
            piVar10 = *(int **)(iVar7 + 8);
          }
          iVar4 = *piVar8;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x046c26fc(iVar4,piVar10,**(undefined4 **)(_UNK_02be6cdc + 0x2be6740));
          if (iVar4 == 0) {
            iVar4 = *piVar8;
            uVar2 = *(undefined4 *)(iVar7 + 8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x046c24b0(iVar4,uVar2,0,**(undefined4 **)(_UNK_02be6ce0 + 0x2be6774));
          }
          iVar4 = *piVar8;
          piVar10 = *(int **)(iVar7 + 8);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x046c23f8(iVar4,piVar10,**(undefined4 **)(_UNK_02be6ce4 + 0x2be67a4));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x046c2488(iVar4,piVar10,iVar7 + 1,**(undefined4 **)(_UNK_02be6ce8 + 0x2be67cc));
        }
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02be6cf8 + 0x2be67ec));
      iVar7 = *(int *)(iVar3 + 0x14);
      if (iVar7 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar7,**(undefined4 **)(_UNK_02be6cf0 + 0x2be681c));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar4 = func_0x04878f14(&uStack_38,*puVar11), iVar7 = iStack_2c, iVar4 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        piVar10 = *(int **)(iVar7 + 0xc);
        if (0 < (int)piVar10) {
          piVar10 = *(int **)(iVar7 + 8);
          piVar8 = piVar10;
        }
        if (0 < (int)piVar10) {
          if (iVar1 == 0) {
            func_0x014388e4();
            piVar8 = *(int **)(iVar7 + 8);
          }
          iVar4 = *piVar12;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x046c26fc(iVar4,piVar8,**(undefined4 **)(_UNK_02be6d00 + 0x2be6898));
          if (iVar4 == 0) {
            iVar4 = *piVar12;
            uVar2 = *(undefined4 *)(iVar7 + 8);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            func_0x046c24b0(iVar4,uVar2,0,**(undefined4 **)(_UNK_02be6d04 + 0x2be68cc));
          }
          iVar4 = *piVar12;
          piVar8 = *(int **)(iVar7 + 8);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar7 = func_0x046c23f8(iVar4,piVar8,**(undefined4 **)(_UNK_02be6d08 + 0x2be68fc));
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          func_0x046c2488(iVar4,piVar8,iVar7 + 1,**(undefined4 **)(_UNK_02be6d0c + 0x2be6924));
        }
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02be6cf4 + 0x2be6944));
      iVar3 = *(int *)(iVar3 + 0x4c);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x0152da0c(&uStack_48,iVar3,**(undefined4 **)(_UNK_02be6d14 + 0x2be697c));
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      iStack_2c = iStack_3c;
      while (iVar4 = func_0x04878f14(&uStack_38,*puVar11), iVar7 = iStack_2c, iVar4 != 0) {
        if (iStack_2c == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar7 + 0xc);
        if (0 < iVar4) {
          iVar4 = *(int *)(iVar7 + 8);
          iVar3 = iVar4;
        }
        if (0 < iVar4) {
          if (iVar1 == 0) {
            func_0x014388e4();
            iVar3 = *(int *)(iVar7 + 8);
          }
          iVar4 = *piVar9;
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x046c26fc(iVar4,iVar3,**(undefined4 **)(_UNK_02be6d20 + 0x2be69f4));
          if (iVar3 == 0) {
            iVar3 = *piVar9;
            uVar2 = *(undefined4 *)(iVar7 + 8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            func_0x046c24b0(iVar3,uVar2,0,**(undefined4 **)(_UNK_02be6d24 + 0x2be6a28));
          }
          iVar3 = *(int *)(iVar7 + 8);
          iVar7 = *piVar9;
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          iVar4 = func_0x046c23f8(iVar7,iVar3,**(undefined4 **)(_UNK_02be6d28 + 0x2be6a58));
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x046c2488(iVar7,iVar3,iVar4 + 1,**(undefined4 **)(_UNK_02be6d2c + 0x2be6a80));
        }
      }
      func_0x04878f10(&uStack_38,**(undefined4 **)(_UNK_02be6d18 + 0x2be6aa0));
    }
  }
  else {
    iVar1 = func_0x029540a4(0x500a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x028e8e94(iVar1,param_1,param_2,0);
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0323c5d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_0323ccc8 + 0x323c5e8);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0323cccc + 0x323c5fc));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccd0 + 0x323c608));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccd4 + 0x323c614));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccd8 + 0x323c620));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccdc + 0x323c62c));
    func_0x01438628(*(undefined4 *)(_UNK_0323cce0 + 0x323c638));
    func_0x01438628(*(undefined4 *)(_UNK_0323cce4 + 0x323c644));
    func_0x01438628(*(undefined4 *)(_UNK_0323cce8 + 0x323c650));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccec + 0x323c65c));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccf0 + 0x323c668));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccf4 + 0x323c674));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccf8 + 0x323c680));
    func_0x01438628(*(undefined4 *)(_UNK_0323ccfc + 0x323c68c));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd00 + 0x323c698));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd04 + 0x323c6a4));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd08 + 0x323c6b0));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd0c + 0x323c6bc));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd10 + 0x323c6c8));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd14 + 0x323c6d4));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd18 + 0x323c6e0));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd1c + 0x323c6ec));
    func_0x01438628(*(undefined4 *)(_UNK_0323cd20 + 0x323c6f8));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x16cf,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_0323cd24 + 0x323c75c) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_0323cd28 + 0x323c778));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_0323cd2c + 0x323c798));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3a8);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x04753c80(iVar1,uVar2,**(undefined4 **)(_UNK_0323cd30 + 0x323c7e0));
    if (iVar3 == 0) {
      func_0x0323cd7c(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0323cd34 + 0x323c804));
      func_0x026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_0323cd38 + 0x323c820) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x03b2c734(**(undefined4 **)(_UNK_0323cd3c + 0x323c83c));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026cf428(iVar3,uVar2,0);
      iVar4 = func_0x0323cde4(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x0323cde4(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x04cd366c(&uStack_48,iVar4,**(undefined4 **)(_UNK_0323cd40 + 0x323c8e0));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_0323cd44 + 0x323c8fc);
        puVar9 = *(undefined4 **)(_UNK_0323cd48 + 0x323c904);
        while (iVar4 = func_0x04873f24(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x0323cf1c(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x03b75ba0(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x04873f20(&uStack_38,**(undefined4 **)(_UNK_0323cd4c + 0x323c980));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x03b75c84(iVar4,**(undefined4 **)(_UNK_0323cd54 + 0x323c9c0));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_0323cd58 + 0x323c9d8);
      puVar9 = *(undefined4 **)(_UNK_0323cd5c + 0x323c9e0);
      while( true ) {
        iVar7 = func_0x0323cde4(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x0323cde4(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x04cd26d0(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x03b75ba0(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        func_0x026ced30(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026cee00(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_0323cd64 + 0x323cac0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x04e4a028(**(undefined4 **)(_UNK_0323cd68 + 0x323cadc));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_0323cd6c + 0x323cb18);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cd2d7c(iVar8,uVar2,**(undefined4 **)(_UNK_0323cd70 + 0x323cb58));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x04cfd760(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x03b75ba0(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x03b73a64(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_0323cd74 + 0x323cbf0));
      func_0x0323cfd8(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x03b73d40(iVar1,uVar2,**(undefined4 **)(_UNK_0323cd78 + 0x323cc2c));
  }
  else {
    iVar1 = func_0x029540a4(0x16cf,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}


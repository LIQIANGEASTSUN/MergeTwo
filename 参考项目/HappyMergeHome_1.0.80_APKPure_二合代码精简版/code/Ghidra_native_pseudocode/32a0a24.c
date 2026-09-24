
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b0a24(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_032b0fb0 + 0x32b0a40);
  uStack_38 = param_1;
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b0fb4 + 0x32b0a54));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fb8 + 0x32b0a60));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fbc + 0x32b0a6c));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fc0 + 0x32b0a78));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fc4 + 0x32b0a84));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fc8 + 0x32b0a90));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fcc + 0x32b0a9c));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fd0 + 0x32b0aa8));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fd4 + 0x32b0ab4));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fd8 + 0x32b0ac0));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fdc + 0x32b0acc));
    func_0x01438628(*(undefined4 *)(_UNK_032b0fe0 + 0x32b0ad8));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x5dde,0);
  if (iVar2 == 0) {
    iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032b0fe4 + 0x32b0b38));
    func_0x032b7d88(iVar2,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    piVar13 = (int *)(iVar2 + 8);
    *piVar13 = param_2;
    func_0x014385cc(piVar13,param_2);
    *(undefined4 *)(iVar2 + 0xc) = uStack_38;
    func_0x014385cc();
    iVar7 = *piVar13;
    if (iVar7 == 0) {
      func_0x014388e4();
    }
    iVar7 = *(int *)(iVar7 + 0xc);
    piVar12 = *(int **)(_UNK_032b0fe8 + 0x32b0ba0);
    puVar10 = *(undefined4 **)(_UNK_032b0fec + 0x32b0ba8);
    while( true ) {
      iVar7 = iVar7 + -1;
      iVar5 = *piVar13;
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      iVar5 = *(int *)(iVar5 + 0xc);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = func_0x051608f4(0,iVar5 + -6,0);
      iVar6 = *piVar13;
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      if (iVar7 < iVar5) break;
      iVar5 = func_0x04cfd760(iVar6,iVar7,*puVar10);
      if (iVar5 != 0) {
        iVar5 = *piVar13;
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x04cfd760(iVar5,iVar7,*puVar10);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        iVar5 = func_0x02c3f4b4(iVar5,0);
        if (0 < iVar5) {
          iVar5 = *piVar13;
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          iVar5 = func_0x04cfd760(iVar5,iVar7,*puVar10);
          if (iVar5 == 0) {
            func_0x014388e4();
          }
          uVar9 = *(undefined4 *)(iVar5 + 0xc);
          if (*(int *)(**(int **)(_UNK_032b0ff0 + 0x32b0c90) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar5 = func_0x024ef144(uVar9,0,0);
          if (iVar5 != 0) {
            iVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032b0ff4 + 0x32b0cc8));
            func_0x032b81f4(iVar5,0);
            if (iVar5 == 0) {
              func_0x014388e4();
            }
            piVar12 = (int *)(iVar5 + 0xc);
            *piVar12 = iVar2;
            func_0x014385cc(piVar12,iVar2);
            iVar6 = *piVar12;
            *(int *)(iVar5 + 8) = iVar7;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 8);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x04cfd760(iVar6,iVar7,**(undefined4 **)(_UNK_032b0ff8 + 0x32b0d2c));
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            uStack_34 = func_0x02c3f4b4(iVar6,0);
            iVar6 = *piVar12;
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 8);
            puVar10 = *(undefined4 **)(_UNK_032b0ffc + 0x32b0d78);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x04cfd760(iVar6,iVar7,*puVar10);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x024eecb8(iVar6,0);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            func_0x024ef228(&uStack_30,iVar6,0);
            uVar1 = uStack_28;
            uVar4 = uStack_2c;
            uVar9 = uStack_30;
            uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_032b1000 + 0x32b0df0));
            func_0x05096384(uVar3,iVar5,**(undefined4 **)(_UNK_032b1004 + 0x32b0e0c),0);
            FUN_032b040c(uStack_38,uStack_34,uVar9,uVar4,uVar1,uVar3);
            piVar12 = *(int **)(_UNK_032b1008 + 0x32b0e44);
            puVar10 = *(undefined4 **)(_UNK_032b100c + 0x32b0e4c);
          }
        }
        if (*(int *)(**(int **)(_UNK_032b1010 + 0x32b0e54) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar5 = func_0x04e4a028(**(undefined4 **)(_UNK_032b1014 + 0x32b0e70));
        iVar6 = *piVar13;
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x04cfd760(iVar6,iVar7,*puVar10);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar11 = *piVar13;
        uVar9 = *(undefined4 *)(iVar6 + 0x24);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x04cfd760(iVar11,iVar7,**(undefined4 **)(_UNK_032b1018 + 0x32b0ecc));
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar6 + 0x24);
        if (iVar5 == 0) {
          func_0x014388e4();
        }
        uStack_4c = 1;
        uStack_48 = 0xffffffff;
        uStack_44 = 0;
        uStack_40 = 0;
        uStack_50 = uVar4;
        func_0x02bd2cf0(iVar5,uVar9,0xffffffff,10,0,0x15);
        puVar10 = *(undefined4 **)(_UNK_032b101c + 0x32b0f38);
      }
    }
    if (6 < *(int *)(iVar6 + 0xc)) {
      uVar9 = func_0x014388d4(**(undefined4 **)(_UNK_032b1020 + 0x32b0f54));
      func_0x05096384(uVar9,iVar2,**(undefined4 **)(_UNK_032b1024 + 0x32b0f70),0);
      if (*(int *)(**(int **)(_UNK_032b1028 + 0x32b0f84) + 0x74) == 0) {
        func_0x014387a4();
      }
      func_0x029a9e10(0x3f19999a,uVar9,0);
    }
    return;
  }
  iVar2 = func_0x029540a4(0x5dde,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  uVar9 = uStack_38;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&uStack_38,uVar9,0);
  func_0x01523a6c(&uStack_38,param_2,0);
  iVar7 = *(int *)(iVar2 + 8);
  uVar9 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar7 == 0) {
    func_0x014388e4();
  }
  uVar4 = 3;
  if (iVar2 == 0) {
    uVar4 = 2;
  }
  func_0x024f56d0(iVar7,uVar9,&uStack_38,uVar4,0,0);
  return;
}


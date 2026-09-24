
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01642704(int param_1)

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
  
  pcVar5 = (char *)(_UNK_01642dfc + 0x164271c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01642e00 + 0x1642730));
    func_0x01438628(*(undefined4 *)(_UNK_01642e04 + 0x164273c));
    func_0x01438628(*(undefined4 *)(_UNK_01642e08 + 0x1642748));
    func_0x01438628(*(undefined4 *)(_UNK_01642e0c + 0x1642754));
    func_0x01438628(*(undefined4 *)(_UNK_01642e10 + 0x1642760));
    func_0x01438628(*(undefined4 *)(_UNK_01642e14 + 0x164276c));
    func_0x01438628(*(undefined4 *)(_UNK_01642e18 + 0x1642778));
    func_0x01438628(*(undefined4 *)(_UNK_01642e1c + 0x1642784));
    func_0x01438628(*(undefined4 *)(_UNK_01642e20 + 0x1642790));
    func_0x01438628(*(undefined4 *)(_UNK_01642e24 + 0x164279c));
    func_0x01438628(*(undefined4 *)(_UNK_01642e28 + 0x16427a8));
    func_0x01438628(*(undefined4 *)(_UNK_01642e2c + 0x16427b4));
    func_0x01438628(*(undefined4 *)(_UNK_01642e30 + 0x16427c0));
    func_0x01438628(*(undefined4 *)(_UNK_01642e34 + 0x16427cc));
    func_0x01438628(*(undefined4 *)(_UNK_01642e38 + 0x16427d8));
    func_0x01438628(*(undefined4 *)(_UNK_01642e3c + 0x16427e4));
    func_0x01438628(*(undefined4 *)(_UNK_01642e40 + 0x16427f0));
    func_0x01438628(*(undefined4 *)(_UNK_01642e44 + 0x16427fc));
    func_0x01438628(*(undefined4 *)(_UNK_01642e48 + 0x1642808));
    func_0x01438628(*(undefined4 *)(_UNK_01642e4c + 0x1642814));
    func_0x01438628(*(undefined4 *)(_UNK_01642e50 + 0x1642820));
    func_0x01438628(*(undefined4 *)(_UNK_01642e54 + 0x164282c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1675,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01642e58 + 0x1642890) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01642e5c + 0x16428ac));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x024f04cc(iVar1,**(undefined4 **)(_UNK_01642e60 + 0x16428cc));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x3a4);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_01642e64 + 0x1642914));
    if (iVar3 == 0) {
      func_0x01642eb0(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01642e68 + 0x1642938));
      func_0x026cf7f8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_01642e6c + 0x1642954) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_01642e70 + 0x1642970));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026cf428(iVar3,uVar2,0);
      iVar4 = func_0x01642f18(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x01642f18(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_01642e74 + 0x1642a14));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_01642e78 + 0x1642a30);
        puVar9 = *(undefined4 **)(_UNK_01642e7c + 0x1642a38);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x01643050(param_1,uVar2);
          if (iVar4 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar4 + 8);
          if (iVar7 == 0) {
            func_0x014388e4();
          }
          func_0x024f05ac(iVar7,uVar2,*puVar9);
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
        }
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_01642e80 + 0x1642ab4));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_01642e88 + 0x1642af4));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_01642e8c + 0x1642b0c);
      puVar9 = *(undefined4 **)(_UNK_01642e90 + 0x1642b14);
      while( true ) {
        iVar7 = func_0x01642f18(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x01642f18(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x024f0530(iVar7,iVar4,*puVar6);
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        func_0x024f05ac(iVar10,uVar2,*puVar9);
        iVar4 = iVar4 + 1;
      }
      uVar11 = func_0x029f3fe4(param_1,0);
      if ((int)uVar11 != 0) {
        func_0x026ced30(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026cee00(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_01642e98 + 0x1642bf4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01642e9c + 0x1642c10));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_01642ea0 + 0x1642c4c);
        do {
          iVar8 = *(int *)(iVar3 + 0x48);
          iVar10 = func_0x0152983c(iVar4,iVar7,*puVar6);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = *(undefined4 *)(iVar10 + 8);
          if (iVar8 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_01642ea4 + 0x1642c8c));
          if (iVar10 == 0) {
            iVar8 = *(int *)(iVar3 + 0x48);
            iVar10 = func_0x0152983c(iVar4,iVar7,*puVar6);
            if (iVar10 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar10 + 8);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            func_0x024f05ac(iVar8,uVar2,*puVar9);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(iVar4 + 0xc));
      }
      uVar2 = func_0x029f05a0(param_1,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_01642ea8 + 0x1642d24));
      func_0x0164310c(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_01642eac + 0x1642d60));
  }
  else {
    iVar1 = func_0x029540a4(0x1675,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a3ec4(iVar1,param_1,0);
  }
  return;
}


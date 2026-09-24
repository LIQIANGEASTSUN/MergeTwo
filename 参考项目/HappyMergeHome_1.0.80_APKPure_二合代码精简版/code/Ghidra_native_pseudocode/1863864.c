
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01873864(int param_1)

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
  
  pcVar5 = (char *)(_UNK_01873f5c + 0x187387c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01873f60 + 0x1873890));
    func_0x01438628(*(undefined4 *)(_UNK_01873f64 + 0x187389c));
    func_0x01438628(*(undefined4 *)(_UNK_01873f68 + 0x18738a8));
    func_0x01438628(*(undefined4 *)(_UNK_01873f6c + 0x18738b4));
    func_0x01438628(*(undefined4 *)(_UNK_01873f70 + 0x18738c0));
    func_0x01438628(*(undefined4 *)(_UNK_01873f74 + 0x18738cc));
    func_0x01438628(*(undefined4 *)(_UNK_01873f78 + 0x18738d8));
    func_0x01438628(*(undefined4 *)(_UNK_01873f7c + 0x18738e4));
    func_0x01438628(*(undefined4 *)(_UNK_01873f80 + 0x18738f0));
    func_0x01438628(*(undefined4 *)(_UNK_01873f84 + 0x18738fc));
    func_0x01438628(*(undefined4 *)(_UNK_01873f88 + 0x1873908));
    func_0x01438628(*(undefined4 *)(_UNK_01873f8c + 0x1873914));
    func_0x01438628(*(undefined4 *)(_UNK_01873f90 + 0x1873920));
    func_0x01438628(*(undefined4 *)(_UNK_01873f94 + 0x187392c));
    func_0x01438628(*(undefined4 *)(_UNK_01873f98 + 0x1873938));
    func_0x01438628(*(undefined4 *)(_UNK_01873f9c + 0x1873944));
    func_0x01438628(*(undefined4 *)(_UNK_01873fa0 + 0x1873950));
    func_0x01438628(*(undefined4 *)(_UNK_01873fa4 + 0x187395c));
    func_0x01438628(*(undefined4 *)(_UNK_01873fa8 + 0x1873968));
    func_0x01438628(*(undefined4 *)(_UNK_01873fac + 0x1873974));
    func_0x01438628(*(undefined4 *)(_UNK_01873fb0 + 0x1873980));
    func_0x01438628(*(undefined4 *)(_UNK_01873fb4 + 0x187398c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = func_0x02953fd4(0x1706,0);
  if (iVar1 == 0) {
    if (*(int *)(**(int **)(_UNK_01873fb8 + 0x18739f0) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01873fbc + 0x1873a0c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x036c7bec(iVar1,**(undefined4 **)(_UNK_01873fc0 + 0x1873a2c));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x2f0);
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024eede4(iVar1,uVar2,**(undefined4 **)(_UNK_01873fc4 + 0x1873a74));
    if (iVar3 == 0) {
      func_0x01874010(param_1);
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01873fc8 + 0x1873a98));
      func_0x026ce8d8(iVar3,0);
      if (*(int *)(**(int **)(_UNK_01873fcc + 0x1873ab4) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e96a8(**(undefined4 **)(_UNK_01873fd0 + 0x1873ad0));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      uVar2 = func_0x01f903f0(iVar4,0);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x026ce694(iVar3,uVar2,0);
      iVar4 = func_0x01874078(param_1);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar4 = func_0x01874078(param_1);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        iVar4 = *(int *)(iVar4 + 0x10);
        if (iVar4 == 0) {
          func_0x014388e4();
        }
        func_0x024ef7ac(&uStack_48,iVar4,**(undefined4 **)(_UNK_01873fd4 + 0x1873b74));
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        puVar6 = *(undefined4 **)(_UNK_01873fd8 + 0x1873b90);
        puVar9 = *(undefined4 **)(_UNK_01873fdc + 0x1873b98);
        while (iVar4 = func_0x015101bc(&uStack_38,*puVar6), uVar2 = uStack_2c, iVar4 != 0) {
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar7 = *(int *)(iVar3 + 0x18);
          iVar4 = func_0x018741b0(param_1,uVar2);
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
        func_0x024ef7bc(&uStack_38,**(undefined4 **)(_UNK_01873fe0 + 0x1873c14));
      }
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar3 + 100);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      func_0x024f04c8(iVar4,**(undefined4 **)(_UNK_01873fe8 + 0x1873c54));
      iVar4 = 0;
      puVar6 = *(undefined4 **)(_UNK_01873fec + 0x1873c6c);
      puVar9 = *(undefined4 **)(_UNK_01873ff0 + 0x1873c74);
      while( true ) {
        iVar7 = func_0x01874078(param_1);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        iVar7 = *(int *)(iVar7 + 0x1c);
        if (iVar7 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar7 + 0xc) <= iVar4) break;
        iVar10 = *(int *)(iVar3 + 100);
        iVar7 = func_0x01874078(param_1);
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
        func_0x026cdf9c(iVar3,(int)((ulonglong)uVar11 >> 0x20),*(undefined4 *)(param_1 + 0x18),
                        *(undefined4 *)(param_1 + 0x1c),0);
        func_0x026ce06c(iVar3,extraout_r1,*(undefined4 *)(param_1 + 0x20),
                        *(undefined4 *)(param_1 + 0x24),0);
      }
      if (*(int *)(**(int **)(_UNK_01873ff8 + 0x1873d54) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_01873ffc + 0x1873d70));
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x1c);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0xc))) {
        iVar7 = 0;
        puVar6 = *(undefined4 **)(_UNK_01874000 + 0x1873dac);
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
          iVar10 = func_0x024f0f34(iVar8,uVar2,**(undefined4 **)(_UNK_01874004 + 0x1873dec));
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
      func_0x024f0ea4(iVar1,uVar2,iVar3,**(undefined4 **)(_UNK_01874008 + 0x1873e84));
      func_0x0187426c(param_1);
    }
    uVar2 = func_0x029f05a0(param_1,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f04d4(iVar1,uVar2,**(undefined4 **)(_UNK_0187400c + 0x1873ec0));
  }
  else {
    iVar1 = func_0x029540a4(0x1706,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028a812c(iVar1,param_1,0);
  }
  return;
}


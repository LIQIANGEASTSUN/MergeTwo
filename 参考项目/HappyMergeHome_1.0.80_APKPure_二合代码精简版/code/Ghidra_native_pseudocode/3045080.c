
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03055080(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int aiStack_28 [3];
  
  iVar9 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_0304d394 + 0x304cbf4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0304d398 + 0x304cc08),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_0304d39c + 0x304cc14));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3a0 + 0x304cc20));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3a4 + 0x304cc2c));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3a8 + 0x304cc38));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3ac + 0x304cc44));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3b0 + 0x304cc50));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3b4 + 0x304cc5c));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3b8 + 0x304cc68));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3bc + 0x304cc74));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3c0 + 0x304cc80));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3c4 + 0x304cc8c));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3c8 + 0x304cc98));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3cc + 0x304cca4));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3d0 + 0x304ccb0));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3d4 + 0x304ccbc));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3d8 + 0x304ccc8));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3dc + 0x304ccd4));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3e0 + 0x304cce0));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3e4 + 0x304ccec));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3e8 + 0x304ccf8));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3ec + 0x304cd04));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3f0 + 0x304cd10));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3f4 + 0x304cd1c));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3f8 + 0x304cd28));
    func_0x01438628(*(undefined4 *)(_UNK_0304d3fc + 0x304cd34));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x73c7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0304d400 + 0x304cd98));
    func_0x030550ac(iVar1,0);
    iVar3 = FUN_0304411c(iVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar10 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_0304d404 + 0x304cdf0));
    if (iVar3 == 0) {
      iVar3 = FUN_0304411c(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_0304d408 + 0x304ce40));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0304d40c + 0x304ce54));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_0304d410 + 0x304ce68));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_030452a0(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_0304d414 + 0x304cec4));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0304d418 + 0x304cef8);
        while( true ) {
          iVar10 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = aiStack_28[0];
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          iVar3 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0304d41c + 0x304cf98));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_0304d420 + 0x304cfe8);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar3 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x04cfda38(iVar10,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar9 = iVar9 + 1;
        }
      }
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_0304d424 + 0x304d048));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_0304d428 + 0x304d05c));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0304d42c + 0x304d0a0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_03041d88();
        if (iVar9 != 0) {
          func_0x03056524(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_0304d430 + 0x304d0d0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_0304d434 + 0x304d0f0));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0304d438 + 0x304d128);
        piVar13 = *(int **)(_UNK_0304d43c + 0x304d130);
        while( true ) {
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cfd760(iVar10,iVar9,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          if (iVar10 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar10 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar10 + 0xc,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar3,0x2e6,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_0304d440 + 0x304d28c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_0304d444 + 0x304d2a8));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0304d448 + 0x304d2bc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0304d44c + 0x304d2dc));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0304d450 + 0x304d2fc));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_0304d454 + 0x304d31c),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0xe2,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0304d458 + 0x304d224);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0304d45c + 0x304d240);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0304d460 + 0x304d254));
      *pcVar8 = '\x01';
    }
    iVar9 = *piVar14;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x014387a4();
      iVar9 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x73c7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}


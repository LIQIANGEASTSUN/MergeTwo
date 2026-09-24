
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03186cfc(undefined4 param_1,int param_2)

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
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_031874b8 + 0x3186d18);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031874bc + 0x3186d2c));
    func_0x01438628(*(undefined4 *)(_UNK_031874c0 + 0x3186d38));
    func_0x01438628(*(undefined4 *)(_UNK_031874c4 + 0x3186d44));
    func_0x01438628(*(undefined4 *)(_UNK_031874c8 + 0x3186d50));
    func_0x01438628(*(undefined4 *)(_UNK_031874cc + 0x3186d5c));
    func_0x01438628(*(undefined4 *)(_UNK_031874d0 + 0x3186d68));
    func_0x01438628(*(undefined4 *)(_UNK_031874d4 + 0x3186d74));
    func_0x01438628(*(undefined4 *)(_UNK_031874d8 + 0x3186d80));
    func_0x01438628(*(undefined4 *)(_UNK_031874dc + 0x3186d8c));
    func_0x01438628(*(undefined4 *)(_UNK_031874e0 + 0x3186d98));
    func_0x01438628(*(undefined4 *)(_UNK_031874e4 + 0x3186da4));
    func_0x01438628(*(undefined4 *)(_UNK_031874e8 + 0x3186db0));
    func_0x01438628(*(undefined4 *)(_UNK_031874ec + 0x3186dbc));
    func_0x01438628(*(undefined4 *)(_UNK_031874f0 + 0x3186dc8));
    func_0x01438628(*(undefined4 *)(_UNK_031874f4 + 0x3186dd4));
    func_0x01438628(*(undefined4 *)(_UNK_031874f8 + 0x3186de0));
    func_0x01438628(*(undefined4 *)(_UNK_031874fc + 0x3186dec));
    func_0x01438628(*(undefined4 *)(_UNK_03187500 + 0x3186df8));
    func_0x01438628(*(undefined4 *)(_UNK_03187504 + 0x3186e04));
    func_0x01438628(*(undefined4 *)(_UNK_03187508 + 0x3186e10));
    func_0x01438628(*(undefined4 *)(_UNK_0318750c + 0x3186e1c));
    func_0x01438628(*(undefined4 *)(_UNK_03187510 + 0x3186e28));
    func_0x01438628(*(undefined4 *)(_UNK_03187514 + 0x3186e34));
    func_0x01438628(*(undefined4 *)(_UNK_03187518 + 0x3186e40));
    func_0x01438628(*(undefined4 *)(_UNK_0318751c + 0x3186e4c));
    func_0x01438628(*(undefined4 *)(_UNK_03187520 + 0x3186e58));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7b5d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03187524 + 0x3186ebc));
    func_0x0318ef9c(iVar1,0);
    iVar3 = FUN_0317e7f4(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_03187528 + 0x3186f14));
    if (iVar3 == 0) {
      iVar3 = FUN_0317e7f4(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_0318752c + 0x3186f64));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_03187530 + 0x3186f78));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_03187534 + 0x3186f8c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_0317fa04(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_03187538 + 0x3186fe8));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_0318753c + 0x318701c);
        while( true ) {
          iVar9 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = iStack_28;
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x04cd26d0(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03187540 + 0x31870bc));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_03187544 + 0x318710c);
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar9 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar10 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x04cfda38(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_03187548 + 0x318716c));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_0318754c + 0x3187180));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_03187550 + 0x31871c4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_0317d564();
        if (iVar3 != 0) {
          func_0x03190320(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_03187554 + 0x31871f4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03187558 + 0x3187214));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_0318755c + 0x318724c);
        piVar13 = *(int **)(_UNK_03187560 + 0x3187254);
        while( true ) {
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x04cfd760(iVar9,iVar3,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = func_0x0202346c(0);
          if (iVar9 == 0) {
            func_0x014388e4();
            uVar2 = func_0x0515c4b0(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x0515c4b0(iVar9 + 8,0);
          }
          uVar4 = func_0x0515c4b0(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x220,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_03187564 + 0x31873b0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_03187568 + 0x31873cc));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0318756c + 0x31873e0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_03187570 + 0x3187400));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03187574 + 0x3187420));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_03187578 + 0x3187440),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0x69,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0318757c + 0x3187348);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_03187580 + 0x3187364);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03187584 + 0x3187378));
      *pcVar8 = '\x01';
    }
    iVar1 = *piVar14;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x7b5d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


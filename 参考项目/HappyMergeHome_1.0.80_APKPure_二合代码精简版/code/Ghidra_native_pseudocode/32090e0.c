
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032190e0(int param_1)

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
  pcVar8 = (char *)(_UNK_03211e50 + 0x32116b0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03211e54 + 0x32116c4));
    func_0x01438628(*(undefined4 *)(_UNK_03211e58 + 0x32116d0));
    func_0x01438628(*(undefined4 *)(_UNK_03211e5c + 0x32116dc));
    func_0x01438628(*(undefined4 *)(_UNK_03211e60 + 0x32116e8));
    func_0x01438628(*(undefined4 *)(_UNK_03211e64 + 0x32116f4));
    func_0x01438628(*(undefined4 *)(_UNK_03211e68 + 0x3211700));
    func_0x01438628(*(undefined4 *)(_UNK_03211e6c + 0x321170c));
    func_0x01438628(*(undefined4 *)(_UNK_03211e70 + 0x3211718));
    func_0x01438628(*(undefined4 *)(_UNK_03211e74 + 0x3211724));
    func_0x01438628(*(undefined4 *)(_UNK_03211e78 + 0x3211730));
    func_0x01438628(*(undefined4 *)(_UNK_03211e7c + 0x321173c));
    func_0x01438628(*(undefined4 *)(_UNK_03211e80 + 0x3211748));
    func_0x01438628(*(undefined4 *)(_UNK_03211e84 + 0x3211754));
    func_0x01438628(*(undefined4 *)(_UNK_03211e88 + 0x3211760));
    func_0x01438628(*(undefined4 *)(_UNK_03211e8c + 0x321176c));
    func_0x01438628(*(undefined4 *)(_UNK_03211e90 + 0x3211778));
    func_0x01438628(*(undefined4 *)(_UNK_03211e94 + 0x3211784));
    func_0x01438628(*(undefined4 *)(_UNK_03211e98 + 0x3211790));
    func_0x01438628(*(undefined4 *)(_UNK_03211e9c + 0x321179c));
    func_0x01438628(*(undefined4 *)(_UNK_03211ea0 + 0x32117a8));
    func_0x01438628(*(undefined4 *)(_UNK_03211ea4 + 0x32117b4));
    func_0x01438628(*(undefined4 *)(_UNK_03211ea8 + 0x32117c0));
    func_0x01438628(*(undefined4 *)(_UNK_03211eac + 0x32117cc));
    func_0x01438628(*(undefined4 *)(_UNK_03211eb0 + 0x32117d8));
    func_0x01438628(*(undefined4 *)(_UNK_03211eb4 + 0x32117e4));
    func_0x01438628(*(undefined4 *)(_UNK_03211eb8 + 0x32117f0));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x7e53,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03211ebc + 0x3211854));
    func_0x051b0d14(iVar1,0);
    iVar3 = FUN_03209df8(iVar9);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_03211ec0 + 0x32118ac));
    if (iVar3 == 0) {
      iVar3 = FUN_03209df8(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_03211ec4 + 0x32118fc));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_03211ec8 + 0x3211910));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_03211ecc + 0x3211924));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_0320aef4(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_03211ed0 + 0x3211980));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_03211ed4 + 0x32119b4);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03211ed8 + 0x3211a54));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_03211edc + 0x3211aa4);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_03211ee0 + 0x3211b04));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_03211ee4 + 0x3211b18));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_03211ee8 + 0x3211b5c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_03208a00();
        if (iVar9 != 0) {
          func_0x0321a400(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_03211eec + 0x3211b8c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_03211ef0 + 0x3211bac));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_03211ef4 + 0x3211be4);
        piVar13 = *(int **)(_UNK_03211ef8 + 0x3211bec);
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
            uVar2 = func_0x0515c4b0(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x0515c4b0(iVar10 + 8,0);
          }
          uVar4 = func_0x0515c4b0(iVar10 + 0xc,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar3,0x27c,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_03211efc + 0x3211d48) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_03211f00 + 0x3211d64));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_03211f04 + 0x3211d78) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03211f08 + 0x3211d98));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03211f0c + 0x3211db8));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_03211f10 + 0x3211dd8),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0xa4,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_03211f14 + 0x3211ce0);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_03211f18 + 0x3211cfc);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03211f1c + 0x3211d10));
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
    iVar1 = func_0x029540a4(0x7e53,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0324ded4(int param_1)

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
  pcVar8 = (char *)(_UNK_0324585c + 0x32450bc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03245860 + 0x32450d0));
    func_0x01438628(*(undefined4 *)(_UNK_03245864 + 0x32450dc));
    func_0x01438628(*(undefined4 *)(_UNK_03245868 + 0x32450e8));
    func_0x01438628(*(undefined4 *)(_UNK_0324586c + 0x32450f4));
    func_0x01438628(*(undefined4 *)(_UNK_03245870 + 0x3245100));
    func_0x01438628(*(undefined4 *)(_UNK_03245874 + 0x324510c));
    func_0x01438628(*(undefined4 *)(_UNK_03245878 + 0x3245118));
    func_0x01438628(*(undefined4 *)(_UNK_0324587c + 0x3245124));
    func_0x01438628(*(undefined4 *)(_UNK_03245880 + 0x3245130));
    func_0x01438628(*(undefined4 *)(_UNK_03245884 + 0x324513c));
    func_0x01438628(*(undefined4 *)(_UNK_03245888 + 0x3245148));
    func_0x01438628(*(undefined4 *)(_UNK_0324588c + 0x3245154));
    func_0x01438628(*(undefined4 *)(_UNK_03245890 + 0x3245160));
    func_0x01438628(*(undefined4 *)(_UNK_03245894 + 0x324516c));
    func_0x01438628(*(undefined4 *)(_UNK_03245898 + 0x3245178));
    func_0x01438628(*(undefined4 *)(_UNK_0324589c + 0x3245184));
    func_0x01438628(*(undefined4 *)(_UNK_032458a0 + 0x3245190));
    func_0x01438628(*(undefined4 *)(_UNK_032458a4 + 0x324519c));
    func_0x01438628(*(undefined4 *)(_UNK_032458a8 + 0x32451a8));
    func_0x01438628(*(undefined4 *)(_UNK_032458ac + 0x32451b4));
    func_0x01438628(*(undefined4 *)(_UNK_032458b0 + 0x32451c0));
    func_0x01438628(*(undefined4 *)(_UNK_032458b4 + 0x32451cc));
    func_0x01438628(*(undefined4 *)(_UNK_032458b8 + 0x32451d8));
    func_0x01438628(*(undefined4 *)(_UNK_032458bc + 0x32451e4));
    func_0x01438628(*(undefined4 *)(_UNK_032458c0 + 0x32451f0));
    func_0x01438628(*(undefined4 *)(_UNK_032458c4 + 0x32451fc));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x7f9b,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032458c8 + 0x3245260));
    func_0x051b0d14(iVar1,0);
    iVar3 = FUN_0323c5d0(iVar9);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_032458cc + 0x32452b8));
    if (iVar3 == 0) {
      iVar3 = FUN_0323c5d0(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_032458d0 + 0x3245308));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_032458d4 + 0x324531c));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_032458d8 + 0x3245330));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_0323d754(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_032458dc + 0x324538c));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_032458e0 + 0x32453c0);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032458e4 + 0x3245460));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_032458e8 + 0x32454b0);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_032458ec + 0x3245510));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_032458f0 + 0x3245524));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_032458f4 + 0x3245568) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_0323a23c();
        if (iVar9 != 0) {
          func_0x03267fb4(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_032458f8 + 0x3245598) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_032458fc + 0x32455b8));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_03245900 + 0x32455f0);
        piVar13 = *(int **)(_UNK_03245904 + 0x32455f8);
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
          func_0x020257a4(iVar3,0x358,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_03245908 + 0x3245754) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_0324590c + 0x3245770));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_03245910 + 0x3245784) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03245914 + 0x32457a4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03245918 + 0x32457c4));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_0324591c + 0x32457e4),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x12e,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_03245920 + 0x32456ec);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_03245924 + 0x3245708);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03245928 + 0x324571c));
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
    iVar1 = func_0x029540a4(0x7f9b,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}


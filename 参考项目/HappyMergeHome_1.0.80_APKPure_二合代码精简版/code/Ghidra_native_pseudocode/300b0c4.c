
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0301b0c4(int param_1)

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
  pcVar8 = (char *)(_UNK_03011f98 + 0x30117f8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03011f9c + 0x301180c),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_03011fa0 + 0x3011818));
    func_0x01438628(*(undefined4 *)(_UNK_03011fa4 + 0x3011824));
    func_0x01438628(*(undefined4 *)(_UNK_03011fa8 + 0x3011830));
    func_0x01438628(*(undefined4 *)(_UNK_03011fac + 0x301183c));
    func_0x01438628(*(undefined4 *)(_UNK_03011fb0 + 0x3011848));
    func_0x01438628(*(undefined4 *)(_UNK_03011fb4 + 0x3011854));
    func_0x01438628(*(undefined4 *)(_UNK_03011fb8 + 0x3011860));
    func_0x01438628(*(undefined4 *)(_UNK_03011fbc + 0x301186c));
    func_0x01438628(*(undefined4 *)(_UNK_03011fc0 + 0x3011878));
    func_0x01438628(*(undefined4 *)(_UNK_03011fc4 + 0x3011884));
    func_0x01438628(*(undefined4 *)(_UNK_03011fc8 + 0x3011890));
    func_0x01438628(*(undefined4 *)(_UNK_03011fcc + 0x301189c));
    func_0x01438628(*(undefined4 *)(_UNK_03011fd0 + 0x30118a8));
    func_0x01438628(*(undefined4 *)(_UNK_03011fd4 + 0x30118b4));
    func_0x01438628(*(undefined4 *)(_UNK_03011fd8 + 0x30118c0));
    func_0x01438628(*(undefined4 *)(_UNK_03011fdc + 0x30118cc));
    func_0x01438628(*(undefined4 *)(_UNK_03011fe0 + 0x30118d8));
    func_0x01438628(*(undefined4 *)(_UNK_03011fe4 + 0x30118e4));
    func_0x01438628(*(undefined4 *)(_UNK_03011fe8 + 0x30118f0));
    func_0x01438628(*(undefined4 *)(_UNK_03011fec + 0x30118fc));
    func_0x01438628(*(undefined4 *)(_UNK_03011ff0 + 0x3011908));
    func_0x01438628(*(undefined4 *)(_UNK_03011ff4 + 0x3011914));
    func_0x01438628(*(undefined4 *)(_UNK_03011ff8 + 0x3011920));
    func_0x01438628(*(undefined4 *)(_UNK_03011ffc + 0x301192c));
    func_0x01438628(*(undefined4 *)(_UNK_03012000 + 0x3011938));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x724e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03012004 + 0x301199c));
    func_0x0301b0f0(iVar1,0);
    iVar3 = FUN_03009c84(iVar9);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_03012008 + 0x30119f4));
    if (iVar3 == 0) {
      iVar3 = FUN_03009c84(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_0301200c + 0x3011a44));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_03012010 + 0x3011a58));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_03012014 + 0x3011a6c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_0300ae08(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_03012018 + 0x3011ac8));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0301201c + 0x3011afc);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03012020 + 0x3011b9c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_03012024 + 0x3011bec);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_03012028 + 0x3011c4c));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_0301202c + 0x3011c60));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_03012030 + 0x3011ca4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_0300888c();
        if (iVar9 != 0) {
          func_0x0301c458(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_03012034 + 0x3011cd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_03012038 + 0x3011cf4));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0301203c + 0x3011d2c);
        piVar13 = *(int **)(_UNK_03012040 + 0x3011d34);
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
          func_0x020257a4(iVar3,0x31a,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_03012044 + 0x3011e90) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_03012048 + 0x3011eac));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0301204c + 0x3011ec0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03012050 + 0x3011ee0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03012054 + 0x3011f00));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_03012058 + 0x3011f20),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x108,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0301205c + 0x3011e28);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_03012060 + 0x3011e44);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_03012064 + 0x3011e58));
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
    iVar1 = func_0x029540a4(0x724e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}


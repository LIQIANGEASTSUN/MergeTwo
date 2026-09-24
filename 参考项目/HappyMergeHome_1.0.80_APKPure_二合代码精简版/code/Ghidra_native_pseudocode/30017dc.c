
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030117dc(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_03011f98 + 0x30117f8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03011f9c + 0x301180c));
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
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x724e,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03012004 + 0x301199c));
    func_0x0301b0f0(iVar1,0);
    iVar3 = FUN_03009c84(param_1);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_03012008 + 0x30119f4));
    if (iVar3 == 0) {
      iVar3 = FUN_03009c84(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
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
      iVar3 = FUN_0300ae08(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_03012018 + 0x3011ac8));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_0301201c + 0x3011afc);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_03012020 + 0x3011b9c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_03012024 + 0x3011bec);
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
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_03012028 + 0x3011c4c));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_0301202c + 0x3011c60));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_03012030 + 0x3011ca4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_0300888c();
        if (iVar3 != 0) {
          func_0x0301c458(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_03012034 + 0x3011cd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_03012038 + 0x3011cf4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_0301203c + 0x3011d2c);
        piVar13 = *(int **)(_UNK_03012040 + 0x3011d34);
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
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar9 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x31a,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_03012044 + 0x3011e90) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_03012048 + 0x3011eac));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0301204c + 0x3011ec0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_03012050 + 0x3011ee0));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_03012054 + 0x3011f00));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_03012058 + 0x3011f20),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0x108,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
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
    iVar1 = *piVar14;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x724e,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031c0644(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_031c0e00 + 0x31c0660);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_031c0e04 + 0x31c0674));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e08 + 0x31c0680));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e0c + 0x31c068c));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e10 + 0x31c0698));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e14 + 0x31c06a4));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e18 + 0x31c06b0));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e1c + 0x31c06bc));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e20 + 0x31c06c8));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e24 + 0x31c06d4));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e28 + 0x31c06e0));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e2c + 0x31c06ec));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e30 + 0x31c06f8));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e34 + 0x31c0704));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e38 + 0x31c0710));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e3c + 0x31c071c));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e40 + 0x31c0728));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e44 + 0x31c0734));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e48 + 0x31c0740));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e4c + 0x31c074c));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e50 + 0x31c0758));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e54 + 0x31c0764));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e58 + 0x31c0770));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e5c + 0x31c077c));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e60 + 0x31c0788));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e64 + 0x31c0794));
    func_0x01438628(*(undefined4 *)(_UNK_031c0e68 + 0x31c07a0));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x7cd4,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_031c0e6c + 0x31c0804));
    func_0x031c8990(iVar1,0);
    iVar3 = FUN_031b7b88(param_1);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_031c0e70 + 0x31c085c));
    if (iVar3 == 0) {
      iVar3 = FUN_031b7b88(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_031c0e74 + 0x31c08ac));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031c0e78 + 0x31c08c0));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_031c0e7c + 0x31c08d4));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_031b8d0c(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_031c0e80 + 0x31c0930));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_031c0e84 + 0x31c0964);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_031c0e88 + 0x31c0a04));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_031c0e8c + 0x31c0a54);
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
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_031c0e90 + 0x31c0ab4));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_031c0e94 + 0x31c0ac8));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_031c0e98 + 0x31c0b0c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_031b59e4();
        if (iVar3 != 0) {
          func_0x031c9c9c(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_031c0e9c + 0x31c0b3c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_031c0ea0 + 0x31c0b5c));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_031c0ea4 + 0x31c0b94);
        piVar13 = *(int **)(_UNK_031c0ea8 + 0x31c0b9c);
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
          func_0x020257a4(iVar10,0x29a,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_031c0eac + 0x31c0cf8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_031c0eb0 + 0x31c0d14));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_031c0eb4 + 0x31c0d28) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_031c0eb8 + 0x31c0d48));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_031c0ebc + 0x31c0d68));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_031c0ec0 + 0x31c0d88),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0xb6,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_031c0ec4 + 0x31c0c90);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_031c0ec8 + 0x31c0cac);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_031c0ecc + 0x31c0cc0));
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
    iVar1 = func_0x029540a4(0x7cd4,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


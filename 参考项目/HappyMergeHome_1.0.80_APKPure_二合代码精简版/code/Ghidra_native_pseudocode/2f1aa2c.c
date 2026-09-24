
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f2aa2c(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_02f2b1e8 + 0x2f2aa48);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f2b1ec + 0x2f2aa5c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b1f0 + 0x2f2aa68));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b1f4 + 0x2f2aa74));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b1f8 + 0x2f2aa80));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b1fc + 0x2f2aa8c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b200 + 0x2f2aa98));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b204 + 0x2f2aaa4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b208 + 0x2f2aab0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b20c + 0x2f2aabc));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b210 + 0x2f2aac8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b214 + 0x2f2aad4));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b218 + 0x2f2aae0));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b21c + 0x2f2aaec));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b220 + 0x2f2aaf8));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b224 + 0x2f2ab04));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b228 + 0x2f2ab10));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b22c + 0x2f2ab1c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b230 + 0x2f2ab28));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b234 + 0x2f2ab34));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b238 + 0x2f2ab40));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b23c + 0x2f2ab4c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b240 + 0x2f2ab58));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b244 + 0x2f2ab64));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b248 + 0x2f2ab70));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b24c + 0x2f2ab7c));
    func_0x01438628(*(undefined4 *)(_UNK_02f2b250 + 0x2f2ab88));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6cfc,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f2b254 + 0x2f2abec));
    func_0x02f2dbd0(iVar1,0);
    iVar3 = FUN_02f23d18(param_1);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_02f2b258 + 0x2f2ac44));
    if (iVar3 == 0) {
      iVar3 = FUN_02f23d18(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_02f2b25c + 0x2f2ac94));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f2b260 + 0x2f2aca8));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_02f2b264 + 0x2f2acbc));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_02f24fa4(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_02f2b268 + 0x2f2ad18));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f2b26c + 0x2f2ad4c);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f2b270 + 0x2f2adec));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_02f2b274 + 0x2f2ae3c);
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
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f2b278 + 0x2f2ae9c));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_02f2b27c + 0x2f2aeb0));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02f2b280 + 0x2f2aef4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_02f22a90();
        if (iVar3 != 0) {
          func_0x02f2eca4(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_02f2b284 + 0x2f2af24) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2b288 + 0x2f2af44));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f2b28c + 0x2f2af7c);
        piVar13 = *(int **)(_UNK_02f2b290 + 0x2f2af84);
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
          func_0x020257a4(iVar10,0x220,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_02f2b294 + 0x2f2b0e0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02f2b298 + 0x2f2b0fc));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_02f2b29c + 0x2f2b110) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_02f2b2a0 + 0x2f2b130));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f2b2a4 + 0x2f2b150));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02f2b2a8 + 0x2f2b170),0);
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
    piVar14 = *(int **)(_UNK_02f2b2ac + 0x2f2b078);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_02f2b2b0 + 0x2f2b094);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02f2b2b4 + 0x2f2b0a8));
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
    iVar1 = func_0x029540a4(0x6cfc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


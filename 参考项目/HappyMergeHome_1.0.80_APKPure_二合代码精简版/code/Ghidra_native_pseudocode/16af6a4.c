
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_016bf6a4(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_016bfe60 + 0x16bf6c0);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016bfe64 + 0x16bf6d4));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe68 + 0x16bf6e0));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe6c + 0x16bf6ec));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe70 + 0x16bf6f8));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe74 + 0x16bf704));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe78 + 0x16bf710));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe7c + 0x16bf71c));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe80 + 0x16bf728));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe84 + 0x16bf734));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe88 + 0x16bf740));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe8c + 0x16bf74c));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe90 + 0x16bf758));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe94 + 0x16bf764));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe98 + 0x16bf770));
    func_0x01438628(*(undefined4 *)(_UNK_016bfe9c + 0x16bf77c));
    func_0x01438628(*(undefined4 *)(_UNK_016bfea0 + 0x16bf788));
    func_0x01438628(*(undefined4 *)(_UNK_016bfea4 + 0x16bf794));
    func_0x01438628(*(undefined4 *)(_UNK_016bfea8 + 0x16bf7a0));
    func_0x01438628(*(undefined4 *)(_UNK_016bfeac + 0x16bf7ac));
    func_0x01438628(*(undefined4 *)(_UNK_016bfeb0 + 0x16bf7b8));
    func_0x01438628(*(undefined4 *)(_UNK_016bfeb4 + 0x16bf7c4));
    func_0x01438628(*(undefined4 *)(_UNK_016bfeb8 + 0x16bf7d0));
    func_0x01438628(*(undefined4 *)(_UNK_016bfebc + 0x16bf7dc));
    func_0x01438628(*(undefined4 *)(_UNK_016bfec0 + 0x16bf7e8));
    func_0x01438628(*(undefined4 *)(_UNK_016bfec4 + 0x16bf7f4));
    func_0x01438628(*(undefined4 *)(_UNK_016bfec8 + 0x16bf800));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x88dd,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_016bfecc + 0x16bf864));
    func_0x016c7b78(iVar1,0);
    iVar3 = FUN_016b6be8(param_1);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_016bfed0 + 0x16bf8bc));
    if (iVar3 == 0) {
      iVar3 = FUN_016b6be8(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_016bfed4 + 0x16bf90c));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_016bfed8 + 0x16bf920));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_016bfedc + 0x16bf934));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_016b7d6c(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_016bfee0 + 0x16bf990));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_016bfee4 + 0x16bf9c4);
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
          uVar2 = func_0x024f0530(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024f0530(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_016bfee8 + 0x16bfa64));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_016bfeec + 0x16bfab4);
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
            func_0x0152874c(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_016bfef0 + 0x16bfb14));
      func_0x024f1124(iVar3,**(undefined4 **)(_UNK_016bfef4 + 0x16bfb28));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_016bfef8 + 0x16bfb6c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_016b4854();
        if (iVar3 != 0) {
          func_0x016c8e94(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_016bfefc + 0x16bfb9c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_016bff00 + 0x16bfbbc));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_016bff04 + 0x16bfbf4);
        piVar13 = *(int **)(_UNK_016bff08 + 0x16bfbfc);
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
          iVar9 = func_0x0152983c(iVar9,iVar3,*puVar12);
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
          func_0x020257a4(iVar10,0x2d6,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_016bff0c + 0x16bfd58) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e96a8(**(undefined4 **)(_UNK_016bff10 + 0x16bfd74));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_016bff14 + 0x16bfd88) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_016bff18 + 0x16bfda8));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_016bff1c + 0x16bfdc8));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_016bff20 + 0x16bfde8),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0xd7,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_016bff24 + 0x16bfcf0);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_016bff28 + 0x16bfd0c);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_016bff2c + 0x16bfd20));
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
    iVar1 = func_0x029540a4(0x88dd,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


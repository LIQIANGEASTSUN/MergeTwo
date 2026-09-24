
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02f9dae8(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_02f9e2a4 + 0x2f9db04);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2a8 + 0x2f9db18));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2ac + 0x2f9db24));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2b0 + 0x2f9db30));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2b4 + 0x2f9db3c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2b8 + 0x2f9db48));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2bc + 0x2f9db54));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2c0 + 0x2f9db60));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2c4 + 0x2f9db6c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2c8 + 0x2f9db78));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2cc + 0x2f9db84));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2d0 + 0x2f9db90));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2d4 + 0x2f9db9c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2d8 + 0x2f9dba8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2dc + 0x2f9dbb4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2e0 + 0x2f9dbc0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2e4 + 0x2f9dbcc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2e8 + 0x2f9dbd8));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2ec + 0x2f9dbe4));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2f0 + 0x2f9dbf0));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2f4 + 0x2f9dbfc));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2f8 + 0x2f9dc08));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e2fc + 0x2f9dc14));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e300 + 0x2f9dc20));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e304 + 0x2f9dc2c));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e308 + 0x2f9dc38));
    func_0x01438628(*(undefined4 *)(_UNK_02f9e30c + 0x2f9dc44));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x6f4d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02f9e310 + 0x2f9dca8));
    func_0x02fa73fc(iVar1,0);
    iVar3 = FUN_02f95f8c(param_1);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_02f9e314 + 0x2f9dd00));
    if (iVar3 == 0) {
      iVar3 = FUN_02f95f8c(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_02f9e318 + 0x2f9dd50));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f9e31c + 0x2f9dd64));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_02f9e320 + 0x2f9dd78));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_02f97110(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_02f9e324 + 0x2f9ddd4));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f9e328 + 0x2f9de08);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02f9e32c + 0x2f9dea8));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_02f9e330 + 0x2f9def8);
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
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02f9e334 + 0x2f9df58));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_02f9e338 + 0x2f9df6c));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02f9e33c + 0x2f9dfb0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_02f94b94();
        if (iVar3 != 0) {
          func_0x02fa8764(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_02f9e340 + 0x2f9dfe0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9e344 + 0x2f9e000));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_02f9e348 + 0x2f9e038);
        piVar13 = *(int **)(_UNK_02f9e34c + 0x2f9e040);
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
          func_0x020257a4(iVar10,0x2fb,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_02f9e350 + 0x2f9e19c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_02f9e354 + 0x2f9e1b8));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_02f9e358 + 0x2f9e1cc) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_02f9e35c + 0x2f9e1ec));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02f9e360 + 0x2f9e20c));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02f9e364 + 0x2f9e22c),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0xf3,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_02f9e368 + 0x2f9e134);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_02f9e36c + 0x2f9e150);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02f9e370 + 0x2f9e164));
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
    iVar1 = func_0x029540a4(0x6f4d,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}


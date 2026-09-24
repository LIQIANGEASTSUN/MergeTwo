
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02ba7db0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_02ba8300 + 0x2ba7dc8);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02ba8304 + 0x2ba7ddc));
    func_0x01438628(*(undefined4 *)(_UNK_02ba8308 + 0x2ba7de8));
    func_0x01438628(*(undefined4 *)(_UNK_02ba830c + 0x2ba7df4));
    func_0x01438628(*(undefined4 *)(_UNK_02ba8310 + 0x2ba7e00));
    func_0x01438628(*(undefined4 *)(_UNK_02ba8314 + 0x2ba7e0c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba8318 + 0x2ba7e18));
    func_0x01438628(*(undefined4 *)(_UNK_02ba831c + 0x2ba7e24));
    func_0x01438628(*(undefined4 *)(_UNK_02ba8320 + 0x2ba7e30));
    func_0x01438628(*(undefined4 *)(_UNK_02ba8324 + 0x2ba7e3c));
    func_0x01438628(*(undefined4 *)(_UNK_02ba8328 + 0x2ba7e48));
    func_0x01438628(*(undefined4 *)(_UNK_02ba832c + 0x2ba7e54));
    func_0x01438628(*(undefined4 *)(_UNK_02ba8330 + 0x2ba7e60));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xff5,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0xff5,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    fStack_30 = 0.0;
    func_0x024f56c0(&fStack_48,0,0);
    fStack_30 = fStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&fStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&fStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x024f56d0(iVar8,uVar10,&fStack_30,uVar5,0,0);
    return;
  }
  piVar13 = *(int **)(_UNK_02ba8334 + 0x2ba7ebc);
  iVar1 = **(int **)(*piVar13 + 0x5c);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  if (*(char *)(iVar1 + 0x2d) != '\0') {
    piVar6 = *(int **)(_UNK_02ba8338 + 0x2ba7ee8);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    if (*(char *)(*(int *)(iVar1 + 0x5c) + 4) == '\0') {
      return;
    }
    iVar8 = **(int **)(*piVar13 + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
      iVar1 = *piVar6;
    }
    iVar3 = *(int *)(iVar1 + 0x74);
    *(undefined1 *)(iVar8 + 0x2d) = 0;
    if (iVar3 == 0) {
      func_0x014387a4();
      iVar1 = *piVar6;
    }
    *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4) = 0;
  }
  iVar1 = func_0x01d90c54(0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x01d99eac(iVar1,0);
  if (iVar1 != 0) {
    if (*(int *)(**(int **)(_UNK_02ba833c + 0x2ba7f84) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02ba8340 + 0x2ba7fa0));
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_02ba8348 + 0x2ba7fcc),
                            **(undefined4 **)(_UNK_02ba8344 + 0x2ba7fc0));
    iVar8 = **(int **)(*piVar13 + 0x5c);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    iVar8 = func_0x02b63a9c(iVar8,0x835,0,0);
    if (iVar8 == 0) {
      piVar6 = *(int **)(_UNK_02ba834c + 0x2ba8018);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = func_0x024efb9c(iVar1,0);
      if (iVar8 != 0) {
        iVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02ba8350 + 0x2ba8048));
        func_0x024eed9c(iVar8,**(undefined4 **)(_UNK_02ba8354 + 0x2ba805c));
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar10 = func_0x024eecb8(iVar1,0);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        iVar3 = *(int *)(iVar8 + 8);
        uVar7 = *(uint *)(iVar8 + 0xc);
        piVar4 = *(int **)(_UNK_02ba8358 + 0x2ba80ac);
        *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + 1;
        iVar12 = *piVar4;
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        if (uVar7 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar8 + 0xc) = uVar7 + 1;
          puVar2 = (undefined4 *)(iVar3 + uVar7 * 4 + 0x10);
          *puVar2 = uVar10;
          func_0x014385cc(puVar2,uVar10);
        }
        else {
          func_0x0152874c(iVar8,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38));
        }
        iVar8 = **(int **)(*piVar13 + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
          piVar4 = (int *)func_0x024eecb8(0,0);
          func_0x014388e4();
        }
        else {
          piVar4 = (int *)func_0x024eecb8(iVar1,0);
        }
        uStack_38 = func_0x024eecb8(iVar1,0);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        piVar11 = (int *)0x0;
        if ((piVar4 != (int *)0x0) &&
           (piVar11 = piVar4, *piVar4 != **(int **)(_UNK_02ba835c + 0x2ba816c))) {
          piVar11 = (int *)0x0;
        }
        uStack_3c = 1;
        uStack_34 = 0;
        uStack_40 = 0;
        func_0x02b63f30(iVar8,0x835,piVar11,0);
        iVar8 = **(int **)(*piVar13 + 0x5c);
        if (iVar8 == 0) {
          func_0x014388e4();
        }
        uStack_40 = 0;
        iVar8 = func_0x02b6127c(iVar8,0x835,0,0);
        if (iVar8 != 0) {
          piVar13 = *(int **)(_UNK_02ba8360 + 0x2ba81e4);
          uVar10 = **(undefined4 **)(*piVar13 + 0x5c);
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar8 = func_0x024ef144(uVar10,0,0);
          if (iVar8 != 0) {
            iVar8 = **(int **)(*piVar13 + 0x5c);
            if (iVar8 == 0) {
              func_0x014388e4();
            }
            uVar10 = func_0x02d06f88(iVar8,0);
            if (*(int *)(*piVar6 + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar8 = func_0x024ef144(uVar10,0,0);
            if (iVar8 != 0) {
              iVar8 = **(int **)(*piVar13 + 0x5c);
              if (iVar8 == 0) {
                func_0x014388e4();
              }
              uVar10 = func_0x02d06f88(iVar8,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              iVar1 = func_0x024eecb8(iVar1,0);
              if (iVar1 == 0) {
                func_0x014388e4();
              }
              func_0x024f0474(&fStack_30,iVar1,0);
              uStack_40 = 0;
              func_0x0157e8ec(uVar10,_UNK_02ba82fc - fStack_30,0,0);
            }
          }
        }
      }
    }
  }
  return;
}


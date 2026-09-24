
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc2a4c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_02bc3274 + 0x2bc2a68);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc3278 + 0x2bc2a7c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc327c + 0x2bc2a88));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3280 + 0x2bc2a94));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3284 + 0x2bc2aa0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3288 + 0x2bc2aac));
    func_0x01438628(*(undefined4 *)(_UNK_02bc328c + 0x2bc2ab8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3290 + 0x2bc2ac4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3294 + 0x2bc2ad0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc3298 + 0x2bc2adc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc329c + 0x2bc2ae8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32a0 + 0x2bc2af4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32a4 + 0x2bc2b00));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32a8 + 0x2bc2b0c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32ac + 0x2bc2b18));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32b0 + 0x2bc2b24));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32b4 + 0x2bc2b30));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32b8 + 0x2bc2b3c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32bc + 0x2bc2b48));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32c0 + 0x2bc2b54));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32c4 + 0x2bc2b60));
    func_0x01438628(*(undefined4 *)(_UNK_02bc32c8 + 0x2bc2b6c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(7999,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(7999,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = iStack_48;
    iStack_2c = iStack_44;
    uStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x024f56d0(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,0x15,**(undefined4 **)(_UNK_02bc32cc + 0x2bc2be0));
  if (iVar1 != 0) {
    iVar1 = FUN_02bad050(param_1,0x15);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar4 = **(int **)(_UNK_02bc32d0 + 0x2bc2c34);
      iVar1 = *(int *)(iVar4 + 0x1c);
      if (iVar1 == 0) {
        func_0x014909d8(iVar4);
        iVar1 = *(int *)(iVar4 + 0x1c);
      }
      iVar1 = *(int *)(iVar1 + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = *(int *)(*(int *)(iVar4 + 0x1c) + 8);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = func_0x0149097c();
      }
      uVar7 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02bc32d4 + 0x2bc2c94) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02bc32d4 + 0x2bc2c94));
      }
      func_0x026795f8(**(undefined4 **)(_UNK_02bc32d8 + 0x2bc2cc4),uVar7,0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b72148(iVar1,0x15,**(undefined4 **)(_UNK_02bc32dc + 0x2bc2ce8));
      if (*(int *)(**(int **)(_UNK_02bc32e0 + 0x2bc2d00) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x032a3fc4(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x032a7be8(iVar4,0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = *(int *)(iVar4 + 0x80);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar11 = *(int *)(iVar1 + 0xc) * *(int *)(iVar1 + 8);
      if (0 < iVar11) {
        iVar10 = 0;
        iStack_3c = iVar4 * -6 + -0x30 + iVar11;
        iVar4 = iStack_3c + param_2 * -6;
        piVar5 = *(int **)(_UNK_02bc32e4 + 0x2bc2d94);
        iStack_48 = iVar11;
        iStack_44 = iVar4;
        iStack_40 = iVar1;
        do {
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bc32e8 + 0x2bc2dbc));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar2 + 0x34);
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bc32ec + 0x2bc2ddc));
          FUN_026f7e40(iVar2,0);
          if ((((iVar9 != 0) && (iVar10 < *(int *)(iVar9 + 0xc))) && (iVar4 <= iVar10)) &&
             (iVar10 < iStack_3c)) {
            puVar6 = *(undefined4 **)(_UNK_02bc32f0 + 0x2bc2e2c);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar6);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar4 + 0xc);
            piVar5 = *(int **)(_UNK_02bc32f4 + 0x2bc2e54);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            FUN_026f6b3c(iVar2,uVar7,0);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar6);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar4 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            FUN_026f6bf8(iVar2,uVar7,0);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar6);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar4 + 0x14);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            FUN_026f6cb4(iVar2,uVar7,0);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar6);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar4 + 0x18) != 0) {
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar11 = *(int *)(iVar2 + 0x90);
              iVar4 = func_0x0152983c(iVar9,iVar10,*puVar6);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar7 = *(undefined4 *)(iVar4 + 0x18);
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              func_0x03b75c38(iVar11,uVar7,**(undefined4 **)(_UNK_02bc32f8 + 0x2bc2f64));
            }
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b780e8(iVar1,iVar10,iVar2,**(undefined4 **)(_UNK_02bc32fc + 0x2bc2f9c));
            if (*(int *)(**(int **)(_UNK_02bc3300 + 0x2bc2fb0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bc3304 + 0x2bc2fcc));
            iVar4 = *piVar5;
            puVar6 = *(undefined4 **)(_UNK_02bc3308 + 0x2bc2fec);
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x014387a4();
              iVar4 = *piVar5;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8);
            piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bc330c + 0x2bc3004),5);
            uStack_28 = 0x15;
            iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02bc3310 + 0x2bc3024),&uStack_28);
            if (piVar5 == (int *)0x0) {
              func_0x014388e4();
            }
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if (piVar5[3] == 0) {
              func_0x014388e8();
            }
            piVar5[4] = iVar4;
            func_0x014385cc(piVar5 + 4,iVar4);
            iStack_2c = iVar10;
            iVar4 = func_0x014387ac(*puVar6,&iStack_2c);
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if ((uint)piVar5[3] < 2) {
              func_0x014388e8();
            }
            piVar5[5] = iVar4;
            func_0x014385cc(piVar5 + 5,iVar4);
            uStack_30 = 0xffffffff;
            iVar4 = func_0x014387ac(*puVar6,&uStack_30);
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if ((uint)piVar5[3] < 3) {
              func_0x014388e8();
            }
            piVar5[6] = iVar4;
            func_0x014385cc(piVar5 + 6,iVar4);
            uStack_34 = 0;
            iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02bc3314 + 0x2bc3160),&uStack_34);
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if ((uint)piVar5[3] < 4) {
              func_0x014388e8();
            }
            piVar5[7] = iVar4;
            func_0x014385cc(piVar5 + 7,iVar4);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uStack_38 = *(undefined4 *)(iVar2 + 8);
            iVar4 = func_0x014387ac(*puVar6,&uStack_38);
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar5 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if ((uint)piVar5[3] < 5) {
              func_0x014388e8();
            }
            piVar5[8] = iVar4;
            func_0x014385cc(piVar5 + 8,iVar4);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02990414(iVar1,uVar7,piVar5,0);
            piVar5 = *(int **)(_UNK_02bc3318 + 0x2bc3260);
            iVar1 = iStack_40;
            iVar4 = iStack_44;
            iVar11 = iStack_48;
          }
          iVar10 = iVar10 + 1;
        } while (iVar11 != iVar10);
      }
    }
  }
  return;
}


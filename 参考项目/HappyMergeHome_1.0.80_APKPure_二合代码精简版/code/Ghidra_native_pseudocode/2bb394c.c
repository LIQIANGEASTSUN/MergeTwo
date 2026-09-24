
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc394c(int param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_02bc4174 + 0x2bc3968);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc4178 + 0x2bc397c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc417c + 0x2bc3988));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4180 + 0x2bc3994));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4184 + 0x2bc39a0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4188 + 0x2bc39ac));
    func_0x01438628(*(undefined4 *)(_UNK_02bc418c + 0x2bc39b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4190 + 0x2bc39c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4194 + 0x2bc39d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc4198 + 0x2bc39dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc419c + 0x2bc39e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41a0 + 0x2bc39f4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41a4 + 0x2bc3a00));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41a8 + 0x2bc3a0c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41ac + 0x2bc3a18));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41b0 + 0x2bc3a24));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41b4 + 0x2bc3a30));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41b8 + 0x2bc3a3c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41bc + 0x2bc3a48));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41c0 + 0x2bc3a54));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41c4 + 0x2bc3a60));
    func_0x01438628(*(undefined4 *)(_UNK_02bc41c8 + 0x2bc3a6c));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1de3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1de3,0);
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
  iVar1 = func_0x046ccb14(iVar1,0x18,**(undefined4 **)(_UNK_02bc41cc + 0x2bc3ae0));
  if (iVar1 != 0) {
    iVar1 = FUN_02bad050(param_1,0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar4 = **(int **)(_UNK_02bc41d0 + 0x2bc3b34);
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
      if (*(int *)(**(int **)(_UNK_02bc41d4 + 0x2bc3b94) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02bc41d4 + 0x2bc3b94));
      }
      func_0x026795f8(**(undefined4 **)(_UNK_02bc41d8 + 0x2bc3bc4),uVar7,0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b72148(iVar1,0x18,**(undefined4 **)(_UNK_02bc41dc + 0x2bc3be8));
      if (*(int *)(**(int **)(_UNK_02bc41e0 + 0x2bc3c00) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x018f5b04(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x018f9728(iVar4,0);
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
        piVar5 = *(int **)(_UNK_02bc41e4 + 0x2bc3c94);
        iStack_48 = iVar11;
        iStack_44 = iVar4;
        iStack_40 = iVar1;
        do {
          if (*(int *)(*piVar5 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bc41e8 + 0x2bc3cbc));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar2 + 0x34);
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bc41ec + 0x2bc3cdc));
          FUN_026f7e40(iVar2,0);
          if ((((iVar9 != 0) && (iVar10 < *(int *)(iVar9 + 0xc))) && (iVar4 <= iVar10)) &&
             (iVar10 < iStack_3c)) {
            puVar6 = *(undefined4 **)(_UNK_02bc41f0 + 0x2bc3d2c);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar6);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar7 = *(undefined4 *)(iVar4 + 0xc);
            piVar5 = *(int **)(_UNK_02bc41f4 + 0x2bc3d54);
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
              func_0x03b75c38(iVar11,uVar7,**(undefined4 **)(_UNK_02bc41f8 + 0x2bc3e64));
            }
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b780e8(iVar1,iVar10,iVar2,**(undefined4 **)(_UNK_02bc41fc + 0x2bc3e9c));
            if (*(int *)(**(int **)(_UNK_02bc4200 + 0x2bc3eb0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bc4204 + 0x2bc3ecc));
            iVar4 = *piVar5;
            puVar6 = *(undefined4 **)(_UNK_02bc4208 + 0x2bc3eec);
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x014387a4();
              iVar4 = *piVar5;
            }
            uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8);
            piVar5 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bc420c + 0x2bc3f04),5);
            uStack_28 = 0x18;
            iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02bc4210 + 0x2bc3f24),&uStack_28);
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
            iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02bc4214 + 0x2bc4060),&uStack_34);
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
            piVar5 = *(int **)(_UNK_02bc4218 + 0x2bc4160);
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


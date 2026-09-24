
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bc218c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_02bc29a4 + 0x2bc21a4);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bc29a8 + 0x2bc21b8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29ac + 0x2bc21c4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29b0 + 0x2bc21d0));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29b4 + 0x2bc21dc));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29b8 + 0x2bc21e8));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29bc + 0x2bc21f4));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29c0 + 0x2bc2200));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29c4 + 0x2bc220c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29c8 + 0x2bc2218));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29cc + 0x2bc2224));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29d0 + 0x2bc2230));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29d4 + 0x2bc223c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29d8 + 0x2bc2248));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29dc + 0x2bc2254));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29e0 + 0x2bc2260));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29e4 + 0x2bc226c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29e8 + 0x2bc2278));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29ec + 0x2bc2284));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29f0 + 0x2bc2290));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29f4 + 0x2bc229c));
    func_0x01438628(*(undefined4 *)(_UNK_02bc29f8 + 0x2bc22a8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cd3,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x5cd3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_30 = 0;
    func_0x024f56c0(&iStack_48,0,0);
    iStack_30 = iStack_48;
    iStack_2c = iStack_44;
    uStack_28 = iStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&iStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&iStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x024f56d0(iVar4,uVar8,&iStack_30,uVar3,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = func_0x046ccb14(iVar1,0x12,**(undefined4 **)(_UNK_02bc29fc + 0x2bc2318));
  if (iVar1 != 0) {
    iVar1 = FUN_02bad050(param_1,0x12);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar4 = **(int **)(_UNK_02bc2a00 + 0x2bc236c);
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
      uVar8 = **(undefined4 **)(iVar1 + 0x5c);
      if (*(int *)(**(int **)(_UNK_02bc2a04 + 0x2bc23cc) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_02bc2a04 + 0x2bc23cc));
      }
      func_0x026795f8(**(undefined4 **)(_UNK_02bc2a08 + 0x2bc23fc),uVar8,0);
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x03b72148(iVar1,0x12,**(undefined4 **)(_UNK_02bc2a0c + 0x2bc2420));
      if (*(int *)(**(int **)(_UNK_02bc2a10 + 0x2bc2438) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar4 = func_0x017d0b50(0);
      if (iVar4 == 0) {
        func_0x014388e4();
      }
      iVar4 = func_0x017d48ec(iVar4,0);
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
        iVar4 = iStack_3c + -0xc;
        piVar6 = *(int **)(_UNK_02bc2a14 + 0x2bc24c4);
        iStack_48 = iVar11;
        iStack_44 = iVar4;
        iStack_40 = iVar1;
        do {
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_02bc2a18 + 0x2bc24ec));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar2 + 0x34);
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02bc2a1c + 0x2bc250c));
          FUN_026f7e40(iVar2,0);
          if ((((iVar9 != 0) && (iVar10 < *(int *)(iVar9 + 0xc))) && (iVar4 <= iVar10)) &&
             (iVar10 < iStack_3c)) {
            puVar7 = *(undefined4 **)(_UNK_02bc2a20 + 0x2bc255c);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar7);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar4 + 0xc);
            piVar6 = *(int **)(_UNK_02bc2a24 + 0x2bc2584);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            FUN_026f6b3c(iVar2,uVar8,0);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar7);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar4 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            FUN_026f6bf8(iVar2,uVar8,0);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar7);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar8 = *(undefined4 *)(iVar4 + 0x14);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            FUN_026f6cb4(iVar2,uVar8,0);
            iVar4 = func_0x0152983c(iVar9,iVar10,*puVar7);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar4 + 0x18) != 0) {
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              iVar11 = *(int *)(iVar2 + 0x90);
              iVar4 = func_0x0152983c(iVar9,iVar10,*puVar7);
              if (iVar4 == 0) {
                func_0x014388e4();
              }
              uVar8 = *(undefined4 *)(iVar4 + 0x18);
              if (iVar11 == 0) {
                func_0x014388e4();
              }
              func_0x03b75c38(iVar11,uVar8,**(undefined4 **)(_UNK_02bc2a28 + 0x2bc2694));
            }
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x03b780e8(iVar1,iVar10,iVar2,**(undefined4 **)(_UNK_02bc2a2c + 0x2bc26cc));
            if (*(int *)(**(int **)(_UNK_02bc2a30 + 0x2bc26e0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02bc2a34 + 0x2bc26fc));
            iVar4 = *piVar6;
            puVar7 = *(undefined4 **)(_UNK_02bc2a38 + 0x2bc271c);
            if (*(int *)(iVar4 + 0x74) == 0) {
              func_0x014387a4();
              iVar4 = *piVar6;
            }
            uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 8);
            piVar6 = (int *)func_0x014386f0(**(undefined4 **)(_UNK_02bc2a3c + 0x2bc2734),5);
            uStack_28 = 0x12;
            iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02bc2a40 + 0x2bc2754),&uStack_28);
            if (piVar6 == (int *)0x0) {
              func_0x014388e4();
            }
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if (piVar6[3] == 0) {
              func_0x014388e8();
            }
            piVar6[4] = iVar4;
            func_0x014385cc(piVar6 + 4,iVar4);
            iStack_2c = iVar10;
            iVar4 = func_0x014387ac(*puVar7,&iStack_2c);
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if ((uint)piVar6[3] < 2) {
              func_0x014388e8();
            }
            piVar6[5] = iVar4;
            func_0x014385cc(piVar6 + 5,iVar4);
            iStack_30 = -1;
            iVar4 = func_0x014387ac(*puVar7,&iStack_30);
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if ((uint)piVar6[3] < 3) {
              func_0x014388e8();
            }
            piVar6[6] = iVar4;
            func_0x014385cc(piVar6 + 6,iVar4);
            uStack_34 = 0;
            iVar4 = func_0x014387ac(**(undefined4 **)(_UNK_02bc2a44 + 0x2bc2890),&uStack_34);
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if ((uint)piVar6[3] < 4) {
              func_0x014388e8();
            }
            piVar6[7] = iVar4;
            func_0x014385cc(piVar6 + 7,iVar4);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            uStack_38 = *(undefined4 *)(iVar2 + 8);
            iVar4 = func_0x014387ac(*puVar7,&uStack_38);
            if ((iVar4 != 0) &&
               (iVar11 = func_0x014387a8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar11 == 0)) {
              uVar3 = func_0x01438904();
              func_0x01438790(uVar3,0);
            }
            if ((uint)piVar6[3] < 5) {
              func_0x014388e8();
            }
            piVar6[8] = iVar4;
            func_0x014385cc(piVar6 + 8,iVar4);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            func_0x02990414(iVar1,uVar8,piVar6,0);
            piVar6 = *(int **)(_UNK_02bc2a48 + 0x2bc2990);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01756b40(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01756e38 + 0x1756b54);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01756e3c + 0x1756b68));
    func_0x01438628(*(undefined4 *)(_UNK_01756e40 + 0x1756b74));
    func_0x01438628(*(undefined4 *)(_UNK_01756e44 + 0x1756b80));
    func_0x01438628(*(undefined4 *)(_UNK_01756e48 + 0x1756b8c));
    func_0x01438628(*(undefined4 *)(_UNK_01756e4c + 0x1756b98));
    func_0x01438628(*(undefined4 *)(_UNK_01756e50 + 0x1756ba4));
    func_0x01438628(*(undefined4 *)(_UNK_01756e54 + 0x1756bb0));
    func_0x01438628(*(undefined4 *)(_UNK_01756e58 + 0x1756bbc));
    func_0x01438628(*(undefined4 *)(_UNK_01756e5c + 0x1756bc8));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8cdc,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8cdc,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    iVar1 = func_0x024f56d0(iVar6,uVar7,&uStack_30,uVar4);
    return iVar1;
  }
  iVar1 = FUN_0174e5a0(param_1);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar7 = 1;
  if (0 < *(int *)(iVar1 + 0x74)) {
    iVar1 = FUN_0174e5a0(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar6 = *(int *)(iVar1 + 0x74);
    iVar1 = FUN_0174edb4(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    if (iVar6 <= *(int *)(iVar1 + 0xc)) {
      iVar1 = FUN_0174edb4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = *(int *)(iVar1 + 0x18);
      iVar1 = FUN_0174e5a0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x74);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      uVar7 = func_0x024f0530(iVar6,iVar1 + -1,**(undefined4 **)(_UNK_01756e60 + 0x1756ce0));
    }
  }
  if (*(int *)(**(int **)(_UNK_01756e64 + 0x1756cf8) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_01756e68 + 0x1756d14));
  piVar8 = *(int **)(_UNK_01756e6c + 0x1756d28);
  iVar6 = *piVar8;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar8;
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x9ec);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = func_0x02b0fc08(iVar1,uVar4,0);
  if (*(int *)(**(int **)(_UNK_01756e70 + 0x1756d70) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar4,0,0);
  if (iVar1 == 0) {
    iVar1 = func_0x02b1cc10(0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02b1ec60(iVar1,0,0);
    if (*(int *)(**(int **)(_UNK_01756e74 + 0x1756dcc) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar6 = FUN_0174c20c();
    iVar1 = 0;
    if (iVar6 != 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01756e78 + 0x1756df8));
      func_0x0152e3ec(iVar1,param_1,**(undefined4 **)(_UNK_01756e7c + 0x1756e14),0);
      pcVar5 = (char *)(_UNK_01795614 + 0x17952b8);
      if (*pcVar5 == '\0') {
        func_0x01438628(*(undefined4 *)(_UNK_01795618 + 0x17952cc),uVar7,iVar1,0);
        func_0x01438628(*(undefined4 *)(_UNK_0179561c + 0x17952d8));
        func_0x01438628(*(undefined4 *)(_UNK_01795620 + 0x17952e4));
        func_0x01438628(*(undefined4 *)(_UNK_01795624 + 0x17952f0));
        func_0x01438628(*(undefined4 *)(_UNK_01795628 + 0x17952fc));
        func_0x01438628(*(undefined4 *)(_UNK_0179562c + 0x1795308));
        func_0x01438628(*(undefined4 *)(_UNK_01795630 + 0x1795314));
        func_0x01438628(*(undefined4 *)(_UNK_01795634 + 0x1795320));
        func_0x01438628(*(undefined4 *)(_UNK_01795638 + 0x179532c));
        func_0x01438628(*(undefined4 *)(_UNK_0179563c + 0x1795338));
        func_0x01438628(*(undefined4 *)(_UNK_01795640 + 0x1795344));
        func_0x01438628(*(undefined4 *)(_UNK_01795644 + 0x1795350));
        func_0x01438628(*(undefined4 *)(_UNK_01795648 + 0x179535c));
        func_0x01438628(*(undefined4 *)(_UNK_0179564c + 0x1795368));
        *pcVar5 = '\x01';
      }
      iVar2 = func_0x02953fd4(0x8ce0,0);
      if (iVar2 == 0) {
        iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01795650 + 0x17953cc));
        func_0x017967c8(iVar2,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        *(int *)(iVar2 + 8) = iVar6;
        func_0x014385cc((int *)(iVar2 + 8),iVar6);
        piVar8 = (int *)(iVar2 + 0xc);
        *piVar8 = iVar1;
        func_0x014385cc(piVar8,iVar1);
        iVar1 = *(int *)(iVar6 + 0x44);
        *(undefined1 *)(iVar6 + 0xb0) = 1;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024f0584(iVar1,uVar7,**(undefined4 **)(_UNK_01795654 + 0x1795434));
        if (iVar1 == 0) {
          uStack_1c = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_01795658 + 0x17954dc),&uStack_1c);
          puVar3 = *(undefined4 **)(_UNK_0179565c + 0x17954f4);
        }
        else {
          iVar1 = *(int *)(iVar6 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x0152a69c(iVar1,uVar7,**(undefined4 **)(_UNK_01795664 + 0x1795464));
          if (*(int *)(**(int **)(_UNK_01795668 + 0x179547c) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x024eec50(uVar4,0,0);
          if (iVar1 == 0) {
            iVar1 = **(int **)(**(int **)(_UNK_01795674 + 0x1795568) + 0x5c);
            uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_01795678 + 0x1795578));
            func_0x0152e3ec(uVar7,iVar2,**(undefined4 **)(_UNK_0179567c + 0x179559c),0);
            if (*(int *)(**(int **)(_UNK_01795680 + 0x17955b0) + 0x74) == 0) {
              func_0x014387a4();
            }
            uStack_28 = 1;
            uStack_24 = 0;
            iVar6 = func_0x02aee9b4(uVar4,**(undefined4 **)(_UNK_01795688 + 0x17955dc),
                                    **(undefined4 **)(_UNK_01795684 + 0x17955d0),uVar7);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            pcVar5 = (char *)(_UNK_02e76828 + 0x2e7675c);
            if (*pcVar5 == '\0') {
              func_0x01438628(*(undefined4 *)(_UNK_02e7682c + 0x2e76770),iVar6,0);
              *pcVar5 = '\x01';
            }
            iVar2 = func_0x02953fd4(0x4cc,0);
            if (iVar2 != 0) {
              iVar2 = func_0x029540a4(0x4cc,0);
              if (iVar2 == 0) {
                func_0x014388e4();
              }
              pcVar5 = (char *)(_UNK_0287a6a8 + 0x287a5b4);
              if (*pcVar5 == '\0') {
                func_0x01438628(*(undefined4 *)(_UNK_0287a6ac + 0x287a5c8),iVar1,iVar6,0);
                *pcVar5 = '\x01';
              }
              uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
              uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
              uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
              uStack_38 = 0;
              uStack_28 = 0;
              func_0x024f56c0(&uStack_50,0);
              uStack_38 = uStack_50;
              uStack_34 = uStack_4c;
              uStack_30 = uStack_48;
              uStack_2c = uStack_44;
              uStack_28 = uStack_40;
              if (*(int *)(iVar2 + 0x10) != 0) {
                func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
              }
              func_0x01523a6c(&uStack_38,iVar1,0);
              func_0x01523a6c(&uStack_38,iVar6,0);
              iVar6 = *(int *)(iVar2 + 8);
              uVar7 = *(undefined4 *)(iVar2 + 0xc);
              iVar1 = *(int *)(iVar2 + 0x10);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              uVar4 = 3;
              if (iVar1 == 0) {
                uVar4 = 2;
              }
              func_0x024f56d0(iVar6,uVar7,&uStack_38,uVar4,0,0);
              iVar1 = func_0x035daef8(&uStack_38,0,**(undefined4 **)(_UNK_0287a6b0 + 0x287a698));
              return iVar1;
            }
            uVar7 = *(undefined4 *)(iVar1 + 0xc);
            if (*(int *)(**(int **)(_UNK_02e76830 + 0x2e767cc) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x024ef144(uVar7,0,0);
            if (iVar6 == 0 || iVar2 == 0) {
              return 0;
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = (*(code *)&UNK_05d3fe88)(iVar1,iVar6,0);
            return iVar1;
          }
          uStack_20 = uVar7;
          uVar7 = func_0x014387ac(**(undefined4 **)(_UNK_0179566c + 0x17954b4),&uStack_20);
          puVar3 = *(undefined4 **)(_UNK_01795670 + 0x17954cc);
        }
        uVar7 = func_0x01529a5c(*puVar3,uVar7,0);
        if (*(int *)(**(int **)(_UNK_01795660 + 0x179550c) + 0x74) == 0) {
          func_0x014387a4();
        }
        func_0x024ef77c(uVar7,0);
        func_0x01791660(iVar6);
        iVar2 = *piVar8;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (**(code **)(iVar2 + 0xc))
                            (*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x14));
        }
        *(undefined1 *)(iVar6 + 0xb0) = 0;
      }
      else {
        iVar2 = func_0x029540a4(0x8ce0,0);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uStack_28 = 0;
        iVar1 = func_0x0286b0b0(iVar2,iVar6,uVar7,iVar1);
      }
      return iVar1;
    }
  }
  return iVar1;
}


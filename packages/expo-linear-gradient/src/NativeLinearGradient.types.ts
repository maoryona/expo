import { PropsWithChildren } from 'react';
import { ViewProps } from 'deprecated-react-native-prop-types';

export type NativeLinearGradientProps = ViewProps &
  PropsWithChildren<{
    colors: number[];
    locations?: number[] | null;
    startPoint?: NativeLinearGradientPoint | null;
    endPoint?: NativeLinearGradientPoint | null;
  }>;

export type NativeLinearGradientPoint = [number, number];
